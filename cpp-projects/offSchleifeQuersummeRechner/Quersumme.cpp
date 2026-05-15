/* ==== Omar Mnawar 21.02.2026 ==== */
/* ==== Aufgabe Quersumme ========= */

#include <iostream>

using namespace std;

int main() {
    int zahl = 1;
    double quersumme = 0;
    char endProgram = 'y';

    while (endProgram != 'n' && endProgram != 'N') {
        cout << "Bitte geben Sie ein Zahl ein, um seiner Quersumme zu berechnen." << endl;
        cout << "Zahl: ";
        cin >> zahl;
        cout << endl;
        while (zahl != 0) {
            quersumme += zahl % 10;
            zahl /= 10;
        }

        cout << "Quersumme: " << quersumme << endl;
        // OM: Auf null setzten, damit der Wert nicht mit dem Alten Ergebnis addiert wird.
        quersumme = 0;

        cout << endl;
        cout << "Wollen Sie das Programm beenden?\nGeben <n/N> ein." << endl;
        cout << "Antwort: ";
        cin >> endProgram;
        cout << endl;
    }

    return 0;
}
