/* ==== Omar Mnawar =================== */
/* ==== Created on 06.06.2026 ========= */
/* ==== Erste Klausur meine Lösung 24.11.2025 10:05 ==== */


#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {

    // OM: i commented this out cause its causing the console to not compile correctly.
    // locale::global(locale("German_germany"));

    // OM: Variablen defenitionen.
    int altersKlasse = 0;
    int gewuenschtenKartenAnzahl = 0;

    // OM: Preise sind in Euro.
    const double preisJugendlichen = 8.00;
    const double preisSenioren = 10.00;
    const double preisNormal = 12.50;

    // OM: Diese Variable ist zu berechnen, wie viele Rabat bekommt der Benutzer.
    double erhaltendeRabatt = 0;

    // OM: Diese Variablen sind nur zu enthalten die einzelnen berechneten Preise.
    double gesamtPreisDerKinderUndPreisDerJugendlichen = 0;
    double gesamtPreisDerSenioren = 0;
    double gesamtPreisNormal = 0;

    // OM: Das hier wird ausgegeben nachdem alle Berechnungen gemacht werden.
    double gesamtEndPreis = 0;
    double berechnung = 0;

    // OM: Diese Variable dient dazu, der Benutzer zu erlauben, weitere Karten zu kaufen.
    bool endProgramm = false;
    int antwortAufWeiterKartenkaufen = 0;

    while (endProgramm == false) {
        cout << "Kinokasse" << endl;
        cout << "Preise für die unterschiedlichen Altersklassen:" << endl;
        cout << " " << setw(55) << "- 1 - Kinder und Jugendlichen bis einschließlich 12 Jahre" << endl;
        cout << " " << setw(55) << "- 2 - Senioren (Alter ab 65 Jahren)" << endl;
        cout << " " << setw(55) << "- 3 - Alle anderen Altersgruppen" << endl;

        int anzahlWiederholungen = 0;
        bool zeigeFehlerMeldung = false;

        // OM: Hier überprüfen wir, ob die angegeben Altersklasse passt.
        cout << "Geben Sie die Altersklasse für die gewünschten Karten an:";
        cin >> altersKlasse;
        cout << endl;

        if (altersKlasse > 3) {
            anzahlWiederholungen++;
        }

        while (anzahlWiederholungen > 0 && anzahlWiederholungen <= 2) {
            cout << "Geben Sie bitte die Altersklasse nochmal an, aber mit richtgen nummer von der Verfügbaren Altersklasse: ";
            cin >> altersKlasse;
            cout << endl;
            if (altersKlasse > 3) {
                anzahlWiederholungen++;
                zeigeFehlerMeldung = true;
            }
            else {
                anzahlWiederholungen = 0;
            }
        }
        if (zeigeFehlerMeldung == true) {
            cout << "Leider das Programm wird jetzt bendet, da Sie keine von den Verfügbaren Altersklassen angegeben haben." << endl;
            return 0; // OM: brechen wir das Progamm ab.
        }
        cout << "Geben Sie die Anzahl der gewuenschten Karten ein: ";
        cin >> gewuenschtenKartenAnzahl;
        cout << endl;

        if (gewuenschtenKartenAnzahl > 0) {
            switch (altersKlasse) {
                case 1:
                    berechnung = gewuenschtenKartenAnzahl * preisJugendlichen;
                    gesamtPreisDerKinderUndPreisDerJugendlichen = gewuenschtenKartenAnzahl * preisSenioren;
                    break;

                case 2:
                    berechnung = gewuenschtenKartenAnzahl * preisSenioren;
                    break;

                case 3:
                    berechnung = gewuenschtenKartenAnzahl * preisNormal;
                    break;
            }
        }
        else {
            cout << "Das Programm wird jetzt benden, da Sie keine Tickets kaufen wollen" << endl;
        }

        if (gewuenschtenKartenAnzahl > 4) {
            cout << "Preis für die Altersgruppe Kinder u. Jugendliche: " << gesamtPreisDerKinderUndPreisDerJugendlichen << endl;
            erhaltendeRabatt = 4;
            double anzahl = (gewuenschtenKartenAnzahl * 10) / 100;
            berechnung = gewuenschtenKartenAnzahl - erhaltendeRabatt;
        }

        cout << "Möchten Sie weitere Karten kaufen? - 1 für ja - 2 für Nein: ";
        cin >> antwortAufWeiterKartenkaufen;

        if (antwortAufWeiterKartenkaufen == 1) {
            endProgramm = false;
        }
        else if (antwortAufWeiterKartenkaufen == 2) {
            endProgramm = true;
        }
        else {
            endProgramm = true;
        }
        gesamtEndPreis = berechnung;

        cout << "Aufgrund der Anzahl der Karten erhalten Sie einen Rabatt von: " << erhaltendeRabatt << " EUR" << endl;

        cout << "Der Gesamtpreis für die Karten beträgt: " << gesamtEndPreis << " EUR" << endl;
    }
    return 0;
}

