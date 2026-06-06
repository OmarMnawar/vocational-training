/* ==== Omar Mnawar =============================== */
/* ==== Created on 06.06.2026 ===================== */
/* ==== Zweite Klausur meine Lösung 09.03.2026 ==== */
/* ==== Aufgabe 4 =================================*/

#include <iostream>
using namespace std;

int summe(int n);

int main() {
    // OM: Damit wir die Umlate in der Konsole anzeigen können.
    // OM: i commented this out cause its causing the console to not compile correctly.
    // locale::global(locale("German_germany"));

    int nummer;
    cout << "Geben Sie eine Nummer ein: ";
    cin >> nummer;
    cout << "Summe aller Zahlen sind: " << summe(nummer) << endl;

    return 0;
}

int summe(int n) {
    if (n <= 0) {
        return 0;
    }
    else {
        return n + summe(n - 1);
    }
}