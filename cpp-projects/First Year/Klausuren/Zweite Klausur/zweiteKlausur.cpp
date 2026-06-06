/* ==== Omar Mnawar =============================== */
/* ==== Created on 06.06.2026 ===================== */
/* ==== Zweite Klausur meine Lösung 09.03.2026 ==== */
/* ==== Aufgabe 2 ================================= */

#include <iostream>

using namespace std;

// OM: Deklarition.
// OM: Implementierung nach main.
double Tilgung(double kaufpreis, double anzalhung, double restbetrag);

int main() {
    // OM: Damit wir die Umlate in der Konsole anzeigen können.
    // OM: i commented this out cause its causing the console to not compile correctly.
    // locale::global(locale("German_germany"));

    // OM: Inputs
    double kaufpreis = 0;
    double beitragAnzahlung = 0;
    double zinssatzProJahr = 0;
    // OM: Es muss mindesten eine sein.
    int laufZeitinmonate = 1;
    // OM: Es muss mindesten eine sein.
    int monatlicheRate = 1;
    char programmBeenden = 'j';

    // OM: Berechnung.
    double zinsen = 0;
    double restBeitrag = 0;
    double tilgung = 0;

    cout << "Klausur 2" << endl;

    do {
        cout << "Geben Sie den Kaufpreis ein: ";
        cin >> kaufpreis;
        cout << "Geben Sie den Betrag der Anzahlung ein: ";
        cin >> beitragAnzahlung;
        cout << "Geben Sie den Zinssatz pro Jahr ein: ";
        cin >> zinssatzProJahr;
        cout << "Geben Sie die Laufzeit in Monate ein: ";
        cin >> laufZeitinmonate;
        cout << "Geben Sie die monatliche Rate ein: ";
        cin >> monatlicheRate;
        zinssatzProJahr /= 100;
        // Omar: Leider Herr Lindenmann habe ich diese Aufgabe nicht ganz verstanden, um die Berechnung zu machen.

        cout << "In der angegebenen Laufzeit wurden" << tilgung << " Euro getilgt!" << endl;
        cout << "In der Zeit wurden " << zinsen << " Euro zinsen gezahlt!" << endl;
        cout << "Es verbleibt ein Restbetrag von " << restBeitrag << " Euro!" << endl;
        // OM: Ein bisschen platz zwischen den Texts machen.
        cout << endl;
        cout << "Möchten Sie eine weitere Berechnung durchführen? <j/n>: ";
        cin >> programmBeenden;
        // OM: Ein bisschen platz zwischen den Texts machen.
        cout << endl;
    } while (programmBeenden == 'j' || programmBeenden == 'J');
    return 0;
}

double Tilgung(double kaufpreis, double anzalhung, double restbetrag) {
    return kaufpreis - anzalhung - restbetrag;
}