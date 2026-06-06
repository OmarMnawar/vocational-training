/* ==== Omar Mnawar ==================================== */
/* ==== Created on 06.06.2026 ========================== */
/* ==== Erste Klausur Lösung =========================== */


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // OM: Variablen defenitionen.
    int altersKlasse = 0;
    int kartenAnzahl = 0;
    int wiederholungen = 0;
    double berechnung = 0;
    double rabatt = 0;

    // OM: Preise sind in Euro.
    const double preisJugendlichen = 8.00;
    const double preisSenioren = 10.00;
    const double preisNormal = 12.50;

    int endProgramm = 2;

    do {
        cout << "Kinokasse" << endl;
        cout << "Preise fuer die unterschiedliche Altersklassen:" << endl;
        cout << setw(8) << " - 1 - Kinder und Jugendliche bis einschließlich 12 Jahre" << endl;
        cout << setw(8) << " - 2 - Sensioren (Alter ab 65 Jahren)" << endl;
        cout << setw(8) << " - 3 - Alle anderen Altersgruppen" << endl;

        cout << "Geben Sie die Altersklasse fuer die gewuenschten Karten an: ";
        cin >> altersKlasse;

        if (altersKlasse > 3 || altersKlasse < 1)
            wiederholungen++;

        while (wiederholungen > 0 && wiederholungen <= 2)  {
            cout << "Es wurde keine gueltige Altersklasse gewaehlt, bitte nochmal versuchen: ";
            cin >> altersKlasse;
            wiederholungen++;
        }

        if (wiederholungen >= 2) {
            cout << "Sie haben mehrmals die Altersklasse falsch eingegeben.\nProgramm wird jetzt beendet." << endl;
            return 0;
        }

        wiederholungen = 0;
        cout << "Geben Sie die Anzahl der gewuenschten Karten ein: ";
        cin >> kartenAnzahl;

        if (kartenAnzahl <= 0)
            wiederholungen++;

        while (wiederholungen > 0 && wiederholungen <= 2) {
            cout << "Bitte geben Sie eine gueltige Kartenanzahl ein: ";
            cin >> kartenAnzahl;
            wiederholungen++;
        }

        if (wiederholungen >= 2) {
            cout << "Sie haben mehrmals die Kartenanzahl falsch eingegeben.\nProgramm wird jetzt beendet." << endl;
            return 0;
        }

        switch (altersKlasse) {
            case 1:
                berechnung += kartenAnzahl * preisJugendlichen;
                cout << "Preis fuer die Altersgruppe Kinder u. Jugendliche: " << berechnung << " EUR" << endl;
                break;
            case 2:
                berechnung += kartenAnzahl * preisSenioren;
                cout << "Preis fuer die Altersgruppe Sensioren: " << berechnung << " EUR" << endl;
                break;

            case 3:
                berechnung += kartenAnzahl * preisNormal;
                cout << "Preis fuer die Altersgruppe normal: " << berechnung << " EUR" << endl;
                break;
        }


        cout << endl;
        cout << "Moechten Sie weitere Karten kaufen? - 1 fuer Ja - 2 fuer Nein: ";
        cin >> endProgramm;
        cout << endl;

    } while (endProgramm != 2);

    if (kartenAnzahl >= 5)
        rabatt += (berechnung * 10) / 100;

    cout << "Aufgrund der Anzahl der Karten erhalten sie einen Rabatt von: " << rabatt << " EUR" << endl;
    cout << endl;
    berechnung -= rabatt;
    cout << "Der Gesamtpreis fuer die Karten betraegt: " << berechnung << " EUR" << endl;

}