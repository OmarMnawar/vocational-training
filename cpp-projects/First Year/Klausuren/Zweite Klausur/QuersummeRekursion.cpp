/* ==== Omar Mnawar =============================== */
/* ==== Created on 06.06.2026 ===================== */
/* ==== Zweite Klausur meine Lösung 09.03.2026 ==== */
/* ==== Aufgabe 3 ================================= */

#include <iostream>
#include "../Zweite Klausur/Headers/Quersumme.h"

using namespace std;

int main() {
    // OM: Damit wir die Umlate in der Konsole anzeigen können.
    // OM: i commented this out cause its causing the console to not compile correctly.
    // locale::global(locale("German_germany"));

    int zahlDerQuersumme = 1;

    cout << "Rekursion" << endl;
    cout << "Geben Sie eine fünfstellige Zahl ein, \nvon der die Quersumme bestimmt werden soll: ";
    cin >> zahlDerQuersumme;

    cout << "Die Quersumme von " << zahlDerQuersumme << " betraegt: " << Quersumme(1, zahlDerQuersumme);

    return 0;
}