/* ==== Omar Mnawar aufgabe Angebotskalkulation ==== */
/* ==== 26.01.2026 ================================= */

#include <iostream>
#include <iomanip>
using namespace std;

double prozentwert(double wert, double wunschProzent, double prozent);

double prozentwert(double wert, double wunschProzent, double prozent = 100)
{
    if (wert <= 0 || wunschProzent <= 0)
        return 0;

    if (prozent <= 0)
        prozent = 100;

    return  (wert * wunschProzent) / prozent;
}

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
        cout << "Bitte den Listenpreis eingeben: ";
        cin >> listenPreis;
        cout << "Lieferrabatt eingeben: ";
        cin >> lieferrabatt;
        cout << "Lieferskonto eingeben: ";
        cin >> lieferskonto;
        cout << "Bezugskosten eingeben: ";
        cin >> bezugskonto;
        cout << "Gemeinkostenzuschlag eingeben: ";
        cin >> gemeinkostenzuschlag;
        cout << "Gewinnzuschlag eingeben: ";
        cin >> gewinnzuschlag;
        cout << "Kundenskonto eingeben: ";
        cin >> kundenskonto;
        cout << "Kundenrabatt eingeben: ";
        cin >> kundenrabatt;



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