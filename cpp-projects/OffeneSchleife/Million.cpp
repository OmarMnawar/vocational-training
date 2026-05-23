// Million.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdint.h>

using namespace std;

int main()
{

    double zins = 0;
    double kredit = 0;
    double berechnungZinsen = 0;


    cout << "Bitte gibt den Kredit ein." << endl;
    cin >> kredit;

    cout << "Bitte gibt die Zinssatz ein." << endl;
    cin >> zins;

    zins /= 100;


    int jahren = 0;
    // OM: Ich habe die digit Operator für c++ benutzt, damit große Zahlen lesebar wird.
    const double million = 1'000'000.00;

    while (kredit < million)
    {
        berechnungZinsen = kredit * zins;
        kredit += berechnungZinsen;

        if (kredit > million)
        {
            cout << "Du hast jetzt mehr als ein Million" << endl;
        }

        jahren++;
        cout << "Kredit dieses Jahr: " << kredit << endl;
    }


    cout << "Mit dem angaben wirst du eine Million haben in: " << jahren << " Jahren" << endl;

    return 0;
}