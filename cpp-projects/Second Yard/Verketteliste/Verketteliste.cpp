#include <stdio.h> 
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
  Address *lastAddress;
  Address *nextAddress;
};


Address *pHeadAddress;
int addressCount = 0;

void WriteAddresse();
void ReadAddresse();

void WriteAddresse() {

  char answer = 'j';
  int layedAdresses = 0;

  do {

    Address *newAddress = new Address();
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
    } else {
      Address *current = pHeadAddress;
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
    tolower(answer);
  } while (answer == 'j');
}


void ReadAddresse() {

  if (pHeadAddress != nullptr) 
  {
    Address *current = pHeadAddress;

    int count = 0;

      while (current->nextAddress != nullptr) 
      {
        cout << "\n========\n" << endl;
        cout << "Adressnummer " << count << " :" << endl;
        cout << "Nachname: \t" << &current->lastname << endl;
        cout << "Strasse: \t" << &current->street << endl;
        cout << "Hausnummer: \t" << &current->housenr << endl;
        cout << "PLZ: \t\t" << &current->postcode << endl;
        cout << "Stadt: \t\t" << &current->city << endl;
        cout << "Land: \t\t" << &current->country << endl;
        current = current->nextAddress;
        count++;
    }
  }
    
  cout << "===== Ende der Addressen =====" << endl;
  cout << "Adressen insgesamt: " << addressCount << endl;
}

void DeleteAdress()
{
  /*
  char lastname[50 + 1] = {}; 
  cout << "Geben sie den Nachnamen der Adresse ein die sie löschen möchten" << endl;
  cin >> lastname;

  for(int i = 0; i < addressArraySize; i++)
  {
    if(strcmp(pArrayAddress[i].lastname, lastname))
    {
      pArrayAddress[i + 1].lastAddress = &pArrayAddress[i - 1];
      if((i - 1) < addressArraySize)
      {
        pArrayAddress[i + 1].lastAddress = NULL;
      }
      pArrayAddress[i - 1].nextAddress = &pArrayAddress[i + 1]; 
      if((i + 1) > addressArraySize)
      {
        pArrayAddress[i - 1].nextAddress = NULL;
      }     
      delete &pArrayAddress[i];
    }
  } */
}

int main() {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  char decision;
  int choice;
  pHeadAddress = new Address();
  
  do
  {
    system("cls");
    
    cout << "========= Adressen Liste ========\n" << endl;
    cout << "1) Einlesen von Adressen\n2) Ausgabe der Adressen\n3) Löschen einer Adresse\n4) Ändern einer Adresse" << endl;
    cout << "Auswahl: ";
    cin >> choice;

    switch(choice)
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

      break;

      default:
      cout << "Dies ist keine korrekte Eingabe" << endl;
    }

    cout << "Moechten Sie die Bearbeitung der Adressen fortsetzten <j/n>? ";
    cin >> decision;
    tolower(decision);

  }while(decision == 'j');
  
  return 0;
}
