/* Omar Mnawar 21.02.2026 */
// Aufgabe Versicherungsvertreter

#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    double umsatz = 500000;
    const double umsatzzuwachsProzent = (8.0 + 100) / 100;
    const double ziel = 1000000;
    int jahren = 0;

    cout << "===================================================================" << endl;
    cout << "Diese Programm berechnet wie viele jahre braucht einen Unternehmen,"
            "\nwenn den doppleten des Umsatz erreicht werden."
            "\n Anfang Umsatz 500,000€."
            "\n Ziel 1,000,000€"
            "\n Es wird jedes jahr um 8% gewachsen." << endl;
    cout << "===================================================================" << endl;
    do {
        umsatz *= umsatzzuwachsProzent;
        jahren += 1;
    } while (umsatz <= ziel);
    cout << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Das Ziel wird im " << jahren << " erreicht werden" << endl;
    cout << "-------------------------------------------------" << endl;
    return 0;
}
