/* ==== Omar Mnawar aufgabe Angebotskalkulation ==== */
/* ==== 26.01.2026 ================================= */

#include <iostream>
#include <iomanip>
#include "../Angebotskalkulation/Headers/Eingaben.h"
#include "../Angebotskalkulation/Headers/Kalkulation.h"
using namespace std;


int main()
{
    double listenPreis = 0;
    double lieferrabatt = 0;
    double lieferskonto = 0;
    double bezugskonto = 0;
    double gemeinkostenzuschlag = 0;
    double gewinnzuschlag = 0;
    double kundenskonto = 0;
    double kundenrabatt = 0;
    char endProgramm = 'n';
    double berechnung = 0;

    cout << "Kalkulation Version 1.0" << endl;

    do {
        do {
            cout << "Bitte den Listenpreis eingeben: ";
        } while (EingabenLesen(listenPreis) == 1);

        do {
            cout << "Lieferrabatt eingeben: ";
        } while (EingabenLesen(lieferrabatt) == 1);

        do {
            cout << "Lieferskonto eingeben: ";
        } while (EingabenLesen(lieferskonto) == 1);

        do {
            cout << "Bezugskosten eingeben: ";
        } while (EingabenLesen(bezugskonto) == 1);

        do {
        cout << "Gemeinkostenzuschlag eingeben: ";
        } while (EingabenLesen(gemeinkostenzuschlag) == 1);

        do {
            cout << "Gewinnzuschlag eingeben: ";
        } while (EingabenLesen(gewinnzuschlag) == 1);

        do {
            cout << "Kundenskonto eingeben: ";
        } while (EingabenLesen(kundenskonto) == 1);

        do {
            cout << "Kundenrabatt eingeben: ";
        } while (EingabenLesen(kundenrabatt) == 1);

        cout << endl;
        cout << "Hier ist die Kalkulation: " << endl;
        cout << "Listenpreis des Lieferanten: " << fixed << setprecision(2) << listenPreis << " Euro" << endl;
        cout << "- Lieferrabatt" << setw(15) << ": " << lieferrabatt << " Prozent" << endl;
        lieferrabatt = prozentwert(listenPreis, lieferrabatt);
        berechnung = listenPreis - lieferrabatt;
        cout << "Zieleinkaufspreis" << setw(12)  << ": " << fixed << setprecision(2) << berechnung << " Euro" << endl;
        cout << "- Liefererskonto" << setw(13)  << ": " << lieferskonto << " Prozent" << endl;
        lieferskonto = prozentwert(berechnung, lieferskonto);
        berechnung -= lieferskonto;
        cout << "Bareinkaufspreis" << setw(13)  << ": " << fixed << setprecision(2) << berechnung << " Euro" << endl;
        cout << "+ Bezugskosten" << setw(15) << ": " << fixed << setprecision(2) << bezugskonto << " Euro" << endl;
        berechnung += bezugskonto;
        cout << "Einstandspreis" << setw(15)  << ": " << fixed << setprecision(2) << berechnung << " Euro" << endl;
        cout << "+ Gemeinkostenzuschlag" << setw(7) << ": " << gemeinkostenzuschlag << " Prozent" << endl;
        gemeinkostenzuschlag = prozentwert(berechnung, gemeinkostenzuschlag);
        berechnung += gemeinkostenzuschlag;
        cout << "Selbstkosten" << setw(17) << ": " << fixed << setprecision(2) << berechnung << " Euro" << endl;
        cout << "+ Gewinnzuschlag" << setw(13) << ": " << gewinnzuschlag << " Prozent"<< endl;
        gewinnzuschlag = prozentwert(berechnung, gewinnzuschlag);
        berechnung += gewinnzuschlag;
        cout << "Barverkaufspreis" << setw(13) << ": " << fixed << setprecision(2) << berechnung << " Euro" << endl;
        cout << "+ Kundenskonto" << setw(15) << ": " << kundenskonto << " Prozent" << endl;
        kundenskonto = prozentwert(berechnung, kundenskonto, 100 - kundenskonto);
        berechnung += kundenskonto;
        cout << "Zielverkaufspreis" << setw(12) << ": " << fixed << setprecision(2) << berechnung << " Euro" << endl;
        cout << "+ Kundenrabatt" << setw(15) << ": " << kundenrabatt << " Prozent" << endl;
        kundenrabatt = prozentwert(berechnung, kundenrabatt, 100 - kundenrabatt);
        berechnung += kundenrabatt;
        cout << "Listenangebotspreis" << setw(10) << ": " << fixed << setprecision(2) << berechnung << " Euro" << endl;

        cout << "Geben Sie bitte <n/N>, um das Programm zu beenden: ";
        cin >> endProgramm;
    } while (endProgramm != 'n' && endProgramm != 'N');
}