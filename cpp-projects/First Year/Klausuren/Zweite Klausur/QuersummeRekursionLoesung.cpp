/* ==== Omar Mnawar =============================== */
/* ==== Created on 06.06.2026 ===================== */
/* ==== Zweite Klausur Lösung 09.03.2026 ==== */
/* ==== Aufgabe 3 ================================= */

#include <iostream>
#include "../Zweite Klausur/Headers/QuersummeLoesung.h"

using namespace std;

int main() {

    int valideZahl = eingabeUndUeberoruefung();

    cout << "Die Quersumme von " << valideZahl << " betraegt: " << quersumme(valideZahl) << endl;

    return 0;
}