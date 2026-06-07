/* ==== Omar Mnawar =============================== */
/* ==== Created on 06.06.2026 ===================== */
/* ==== Zweite Klausur Lösung 09.03.2026 ==== */
/* ==== Aufgabe 2 ================================= */

#include <iostream>

using namespace std;

int main() {

    // OM: Inputs
    double kaufpreis = 0;
    double startBeitrag = 0;
    double anzahlung = 0;
    double zinssatzProJahr = 0;
    int laufZeitInMonat = 1;
    double monatlicheRate = 1;
    int monatlicheZeit = 0;
    char programmBeenden = 'j';

    // OM: Berechnung.
    double zinsen = 0;
    double restBeitrag = 0;
    double tilgung = 0;
    double monatsZinsen = 0;

    cout << "Klausur 2" << endl;

    do {
        cout << "Geben Sie den Kaufpreis ein: ";
        cin >> kaufpreis;
        cout << "Geben Sie den Betrag der Anzahlung ein: ";
        cin >> anzahlung;
        cout << "Geben Sie den Zinssatz pro Jahr ein: ";
        cin >> zinssatzProJahr;
        cout << "Geben Sie die Laufzeit in Monate ein: ";
        cin >> laufZeitInMonat;
        cout << "Geben Sie die monatliche Rate ein: ";
        cin >> monatlicheRate;

        zinsen = 0;
        monatlicheZeit = 0;
        startBeitrag = kaufpreis - anzahlung;
        restBeitrag = startBeitrag;

        for (int i = 1; i <= laufZeitInMonat; i++) {
            monatlicheZeit++;

            if (restBeitrag <= monatlicheRate) {
                double letzterMonatsZins = restBeitrag * (zinssatzProJahr / 100.0) / 12.0;
                zinsen += letzterMonatsZins;

                restBeitrag = 0;
                break;
            }

            restBeitrag -= monatlicheRate;

            monatsZinsen = restBeitrag * (zinssatzProJahr / 100.0) / 12.0;
            zinsen += monatsZinsen;
            restBeitrag += monatsZinsen;
        }

        tilgung = startBeitrag - restBeitrag;

        if (restBeitrag <= 0 && monatlicheZeit < laufZeitInMonat) {
            cout << "Es werden nach " << monatlicheZeit << " abgezahlt werden." << endl;
        }

        cout << "In der angegebenen Laufzeit wurden " << tilgung << " Euro getilgt!" << endl;
        cout << "In der Zeit wurden " << zinsen << " Euro zinsen gezahlt!" << endl;
        cout << "Es verbleibt ein Restbetrag von " << restBeitrag << " Euro!" << endl;
        cout << endl;

        cout << "Möchten Sie eine weitere Berechnung durchführen? <j/n>: ";
        cin >> programmBeenden;
        cout << endl;
    } while (programmBeenden == 'j' || programmBeenden == 'J');

    return 0;
}
