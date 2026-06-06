/* ==== Omar Mnawar =============================== */
/* ==== Created on 06.06.2026 ===================== */
/* ==== Zweite Klausur meine Lösung 09.03.2026 ==== */
/* ==== Aufgabe 3 ================================= */

#include "../Zweite Klausur/Headers/Quersumme.h"

using namespace std;

double Quersumme(int n, double zahl) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;

    return zahl / 10 + Quersumme(zahl, n - 1);
}