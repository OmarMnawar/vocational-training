#include <stdio.h> 

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

int main() {

  char decision;
  char choice;

  do
  {
    console(cls);
    cout << "=========Adressen Liste========\n" << endl;
    cout << "1) Einlesen von Adressen\n2) Ausgabe der Adressen\n3) Löschen einer Adresse\n4) Ändern einer Adresse" << endl;
    cin >> choice;

    switch(choice)
    {
      case 1:

      break;
      case 2:

      break;
      case 3:
      break;
      case 4:

      break;
      default:
      cout << "Dies ist keine korrekte Eingabe" << endl;
    }
  }while(decision == 'j');
  
  return 0;
}
