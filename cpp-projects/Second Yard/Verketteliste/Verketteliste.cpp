#include <stdio.h> 
#include <iostream>

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


Address *pArrayAddress;
int addressArraySize = 0;

void WriteAddresse();
void ReadAddresse();
bool HasNoAddresses();

void WriteAddresse() {

  cout << "Wie viele Adresse moechte Sie anlegen?\n";
  cout << "Anzahl: ";
  cin >> addressArraySize;

  pArrayAddress = new Address[addressArraySize];

  for (int i = 0; i < addressArraySize; i++) {
    cout << "Nachname: ";
    cin >> pArrayAddress[i].lastname;
    cout << "Strasse: ";
    cin >> pArrayAddress[i].street;
    cout << "Hausnummer: ";
    cin >> pArrayAddress[i].housenr;
    cout << "PLZ: ";
    cin >> pArrayAddress[i].postcode;
    cout << "Stadt: ";
    cin >> pArrayAddress[i].city;
    cout << "Land: ";
    cin >> pArrayAddress[i].country;

    if ((i - 1) < addressArraySize) {
      pArrayAddress[i].lastAddress = NULL;
    } else {
      pArrayAddress[i].lastAddress = &pArrayAddress[i - 1];
    }

    if ((i + 1) > addressArraySize) {
      pArrayAddress[i].nextAddress = NULL;
    } else {
      pArrayAddress[i].nextAddress = &pArrayAddress[i + 1];
    }
  }
}


void ReadAddresse() {

  int count = 0;

  if (HasNoAddresses() == false) {
    for (int i = 0; i < addressArraySize; i++) {
      cout << "Nachname: \t" << pArrayAddress[i].lastname << endl;
      cout << "Strasse: \t" << pArrayAddress[i].street << endl;
      cout << "Hausnummer: \t" << pArrayAddress[i].housenr << endl;
      cout << "PLZ: \t" << pArrayAddress[i].postcode << endl;
      cout << "Stadt: \t" << pArrayAddress[i].city << endl;
      cout << "Land: \t" << pArrayAddress[i].country << endl;
      count++;
    }
  }
    
  cout << "===== Ende der Addressen =====" << endl;
  cout << "Adressen insgesamt: \t " << count;
}

void DeleteAdress()
{
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
  }
}
bool HasNoAddresses() {
  if (addressArraySize < 1) {
    return true;
  } else {
    return false;
  }
}

int main() {

  char decision;
  int choice;

  do
  {
    system("cls");

    cout << "=========Adressen Liste========\n" << endl;
    cout << "1) Einlesen von Adressen\n2) Ausgabe der Adressen\n3) Löschen einer Adresse\n4) Ändern einer Adresse" << endl;
    cout << "Auswahl: \t";
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
  
  delete pArrayAddress;
  
  return 0;
}
