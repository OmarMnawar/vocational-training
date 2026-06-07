/* ==== Omar Mnawar =============================== */
/* ==== Created on 06.06.2026 ===================== */
/* ==== Zweite Klausur Lösung 09.03.2026 ==== */
/* ==== Aufgabe 3 ================================= */

#include <iostream>
#include "../Zweite Klausur/Headers/QuersummeLoesung.h"

using namespace std;

int eingabeUndUeberoruefung() {
    int zahl;
    while (true) {
        cout << "Rekursion" << endl;
        cout << "Dieses Programm Unterstuetzt die Quersumme einer negative Zahl nicht.\nGeben Sie eine fünfstellige positive Zahl ein,\nvon der die Quersumme bestimmt werden soll: ";
        cin >> zahl;

        if (cin.fail() || zahl < 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ungueltige Eingabe! Versuchen Sie es erneut." << endl;
            cout << endl;
        } else {
            return zahl;
        }
    }
}

int quersumme(int zahl) {

    if (zahl == 0)
        return 0;

    return zahl % 10 + quersumme(zahl / 10);
}