#include <iostream>
#include <Windows.h>

using namespace std;


struct Address {
    char street[50 + 1];
    char housenr[5 + 1];
    int postcode = 0;
    char city[60 + 1];
    char country[25 + 1];
    char lastname[50 + 1];
    Address* lastAddress = nullptr;
    Address* nextAddress = nullptr;
};


Address* pHeadAddress = nullptr;
int addressCount = 0;

void WriteAddresse();
void ReadAddresse();
void DeleteAdress();
void ChangeAdress();

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char decision;
    int choice;

    do
    {
        system("cls");

        cout << "========= Adressen Liste ========\n" << endl;
        cout << "1) Einlesen von Adressen\n2) Ausgabe der Adressen\n3) Löschen einer Adresse\n4) Ändern einer Adresse" << endl;
        cout << "Auswahl: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            WriteAddresse();
            break;

        case 2:
            ReadAddresse();
            break;

        case 3:
            DeleteAdress();
            break;

        case 4:
            ChangeAdress();
            break;

        default:
            cout << "Dies ist keine korrekte Eingabe" << endl;
        }

        cout << "Moechten Sie die Bearbeitung der Adressen fortsetzten <j/n>? ";
        cin >> decision;
        decision = tolower(decision);
    } while (decision == 'j');

    return 0;
}
void WriteAddresse() {

    char answer = 'j';
    int layedAdresses = 0;

    do {

        Address* newAddress = new Address();
        cout << "\n=========\n" << endl;
        cout << "Neue Adress:" << endl;
        cout << "Nachname: ";
        cin >> newAddress->lastname;
        cout << "Strasse: ";
        cin >> newAddress->street;
        cout << "Hausnummer: ";
        cin >> newAddress->housenr;
        cout << "PLZ: ";
        cin >> newAddress->postcode;
        cout << "Stadt: ";
        cin >> newAddress->city;
        cout << "Land: ";
        cin >> newAddress->country;

        if (pHeadAddress == nullptr) {
            pHeadAddress = newAddress;
        }
        else {
            Address* current = pHeadAddress;
            while (current->nextAddress != nullptr) {
                current = current->nextAddress;
            }

            current->nextAddress = newAddress;
            newAddress->lastAddress = current;
        }
        layedAdresses++;
        addressCount++;

        cout << "Neu Angelegten Adressen: " << layedAdresses << endl;
        cout << "Adressen insgesamt: " << addressCount << endl;

        cout << "Möchten Sie weitere Addressen anlegen <j/n>?";
        cin >> answer;
        answer = tolower(answer);
    } while (answer == 'j');
}


void ReadAddresse() {

    if (pHeadAddress != nullptr)
    {
        Address* current = pHeadAddress;

        int count = 0;

        while (count < addressCount)
        {
            cout << "\n========\n" << endl;
            cout << "Adressnummer " << count + 1 << " :" << endl;
            cout << "Nachname: \t" << current->lastname << endl;
            cout << "Strasse: \t" << current->street << endl;
            cout << "Hausnummer: \t" << current->housenr << endl;
            cout << "PLZ: \t\t" << current->postcode << endl;
            cout << "Stadt: \t\t" << current->city << endl;
            cout << "Land: \t\t" << current->country << endl;
            current = current->nextAddress;
            count++;
        }
    }

    cout << "===== Ende der Addressen =====" << endl;
    cout << "Adressen insgesamt: " << addressCount << endl;
}

void DeleteAdress()
{
    Address* current = pHeadAddress;

    char lastname[50 + 1] = {};
    cout << "Geben sie den Nachnamen der Adresse ein die sie löschen möchten" << endl;
    cin >> lastname;

    while (current != nullptr)
    {
        if (strcmp(current->lastname, lastname) == 0)
        {
            if (current->lastAddress != nullptr)
            {
                current->lastAddress->nextAddress = current->nextAddress;
            }
            else
            {
                pHeadAddress = current->nextAddress;
            }

            if (current->nextAddress != nullptr)
            {
                current->nextAddress->lastAddress = current->lastAddress;
            }

            delete current;
            addressCount--;
            cout << "Adresse wurde gelöscht." << endl;
            return;
        }
        current = current->nextAddress;
    }
    cout << "Keine Adresse mit dem Nachnamen gefunden." << endl;
}
void ChangeAdress()
{
    Address* current = pHeadAddress;
    char lastname[50 + 1] = {};
    char substitute[50 + 1] = {};
    char cont;
    int count = 0;
    int choice;

    cout << "Geben sie den Nachnamen der zu ändernden Adresse ein :\t";
    cin >> lastname;

    for (int i = 0; i < addressCount; i++)
    {
        if (strcmp(current->lastname, lastname) == 0)
        {
            do
            {
                system("cls");
                cout << "Welches Datum möchten sie ändern?" << endl;
                cout << "1) Nachname:\t" << current->lastname << "\n"
                    << "2) Strasse:\t" << current->street << "\n"
                    << "3) Hausnr.:\t" << current->housenr << "\n"
                    << "4) PLZ:\t\t" << current->postcode << "\n"
                    << "5) Stadt:\t\t" << current->city << "\n"
                    << "6) Land:\t\t" << current->country << "\n" << endl;
                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << "Neuer Nachname:\t";
                    cin >> current->lastname;
                    break;
                case 2:
                    cout << "Neue Strasse:\t";
                    cin >> current->street;
                    break;
                case 3:
                    cout << "Neue Hausnr.:\t";
                    cin >> current->housenr;
                    break;
                case 4:
                    cout << "Neue PLZ:\t";
                    cin >> current->postcode;
                    break;
                case 5:
                    cout << "Neue Stadt:\t";
                    cin >> current->city;
                    break;
                case 6:
                    cout << "Neues Land:\t";
                    cin >> current->country;
                    break;
                default:
                    cout << "Dies ist eine falsche Eingabe." << endl;
                    break;
                }

                cout << "Adresse wurde geändert." << endl;
                cout << "Möchten sie ein weiteres Datum austauschen bei der Adresse? <j/n>";
                cin >> cont;
                cont = tolower(cont);
            } while (cont == 'j');
        }
    }
}
