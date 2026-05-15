/* Omar Mnawar 21.02.2026 */
// Aufgabe Rechner.
#include <iostream>

using namespace std;

int main() {
    char operand;
    char endProgram = 'w';
    double ersteNummer = 0;
    double zweiteNummer = 0;
    double result = 0.0;
    cout << endl;
    cout << "================================" << endl;
    cout << "Willkommen zum Rechner Programm." << endl;
    cout << "================================" << endl;
    cout << endl;

    while (endProgram != 'n' && endProgram != 'N') {
        cout << "Bitte geben Sie eine Operand ein: ";
        cin >> operand;
        cout << "Bitte geben Sie die erste Nummer ein: ";
        cin >> ersteNummer;
        cout << "Bitte geben Sie die zweite Nummer ein: ";
        cin >> zweiteNummer;

        cout << endl;

        switch (operand) {
            case '+':
                result = ersteNummer + zweiteNummer;
                break;
            case '-':
                result = ersteNummer - zweiteNummer;
                break;
            case '*':
                result = ersteNummer * zweiteNummer;
                break;
            case '/':
                if (ersteNummer == 0 || zweiteNummer == 0) {
                    cout << "Sie können nicht durch 0 teilen.\nBitte nochmal versuchen" << endl;
                    break;
                }
                result = ersteNummer / zweiteNummer;
                break;

            default:
                cout << "Keine Valide Operand wurde angegeben." << endl;
                cout << endl;
                break;
        }

        cout << "Result: " << result << endl;
        cout << endl;
        cout << "Um das Programm zu beenden:\nGeben Sie bitte:\nN oder n" << endl;
        cout << "Antwort: ";
        cin >> endProgram;
        cout << endl;
    }
    return 0;
}
