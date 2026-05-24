/* Omar Mnawar 21.02.2026 */
// Aufgabe Versicherungsvertreter


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double versicherungssumme = 0;
    const double prozentProJahr = 1.0 / 100;
    const double proAbschluss = 50.00;
    double aktuelleProvision = 0.0;
    double gesamtProvision = 0.0;

    cout << endl;
    cout << "===============================================" << endl;
    cout << "Willkommen zum Versicherungsvertreter Programm." << endl;
    cout << "===============================================" << endl;
    cout << endl;

    do {
        cout << "Bitte Geben Sie die Versicherungssumme ein."
                "\nZum Beenden des Programms, geben Sie 0 als Versicherungssumme."
                "\nVersicherungssumme in EURO: ";
        cin >> versicherungssumme;
        // OM: Aufgabe sagt, alle Provisionen und nicht einzelnen.
        // Deswegen benutze ich += statt =.
        aktuelleProvision = proAbschluss + versicherungssumme * prozentProJahr;
        gesamtProvision += aktuelleProvision;
        cout << endl;
        if (versicherungssumme != 0.0) {
            cout << "Berechnete Versicherungssumme: " << fixed << setprecision(2) << aktuelleProvision << " EURO" <<
                    endl;
        }
    } while (versicherungssumme != 0);
    cout << "Programm wurde beendet." << endl;
    return 0;
}
