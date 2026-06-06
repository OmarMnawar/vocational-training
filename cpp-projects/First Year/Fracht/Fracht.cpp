/* Omar Mnawar 22.02.2026 */
// Aufgabe Fracht

#include <iostream>
#include <iomanip>

using namespace std;

double BruttoGewicht(int anzahlKartons);
int BerechnetesGewicht(double bruttoGewicht);
double FrachtBerechnung(int berechnetGewicht);
double NettoUmsatzBerechnung(int anzahlKartons);
double GesamtUmsatzBerechnung(double fracht, double nettoUmsatz);
double ZielPreisBerechnung(double gesamtUmsatz, double rabatt);

double Rabatt();
double BruttoGewicht(int anzahlKartons) {
    const double einzelKartonBruttoGewichtInKG = 24;
    return anzahlKartons * einzelKartonBruttoGewichtInKG;
}
int BerechnetesGewicht(double bruttoGewicht) {
    // OM: Damit wir immer auf volle 100kg bleiben.
    // Im int speichern, damit wir die Zahlen nach dem Komma entfernen können.
    int berechnung = (bruttoGewicht + 99) / 100;
    // OM: Dann wieder auf den orginalen Wert bringen.
    return berechnung * 100;
}

double FrachtBerechnung(int berechnetGewicht, double anzahlKilometer) {
    const double kostenProKilometer = 6.0 / 100; // OM: In Cents umwandeln.
    return berechnetGewicht * kostenProKilometer * anzahlKilometer / 100.00;
}

double NettoUmsatzBerechnung(int anzahlKartons) {
    const double kostenProStueck = 7.85;
    const double stueckeProKarton = 12;
    return anzahlKartons * stueckeProKarton * kostenProStueck;
}

double GesamtUmsatzBerechnung(double fracht, double nettoUmsatz) {
    return fracht + nettoUmsatz;
}

double Rabatt(double nettoUmsatz) {
    // OM: In Prozent
    const double erstenZehnTausend = 3.0 / 100;
    const double erstenFuenfzigTausend = 5.0 / 100;
    const double mehrAlsFuenfzigTausend = 7.0 / 100;

    if (nettoUmsatz <= 10000.00) {
        return nettoUmsatz * erstenZehnTausend;
    }
    else if (nettoUmsatz > 10000.00 && nettoUmsatz <= 50000.00) {
        return  nettoUmsatz * erstenFuenfzigTausend;
    }
    else if (nettoUmsatz > 50000.00) {
        return  nettoUmsatz * mehrAlsFuenfzigTausend;
    }
    else {
        return 0.00;
    }
}

double ZielPreisBerechnung(double gesamtUmsatz, double rabatt) {
    return gesamtUmsatz - rabatt;
}

int main() {
    int anzahlKartons = 0;

    do {
        double anzahlKilometers = 0;
        double bruttoGewicht = 0;
        int berechnetGewicht = 0;
        double frachtKostenProKilometer = 0;
        double nettoUmsatzBerechnung = 0;
        double gesamtUmsatzBerechnung = 0;
        double rabatt = 0;
        double zielPreis = 0;

        cout << "Programm: Frachtberechnung" << endl;
        cout << "==========================" << endl;
        cout << endl;
        cout << "Anzahl Kartons" << setw(5) << ": " << setw(2);
        cin >> anzahlKartons;
        if (anzahlKartons <= 0) {
            cout << "Anzahl Kartons" << setw(5) << ": " << setw(1) << "_" << endl;
            break;
        }
        cout << "Anzahl Kilometer" << setw(3) << ": " << setw(2);
        cin >> anzahlKilometers;

        // OM: Überprüfung der Anzahl der Kilometer, da es keinen Sinn macht, Null oder weniger zu sein.
        while (anzahlKilometers <= 0) {
            cout << "Anzahl Kilometer darf nicht Null oder weniger sein.\nGeben Sie den Wert wieder ein." << endl;
            cout << "Anzahl Kilometer" << setw(3) << ": " << setw(2);
            cin >> anzahlKilometers;
        }

        bruttoGewicht = BruttoGewicht(anzahlKartons);
        berechnetGewicht = BerechnetesGewicht(bruttoGewicht);
        frachtKostenProKilometer = FrachtBerechnung(berechnetGewicht, anzahlKilometers);
        nettoUmsatzBerechnung = NettoUmsatzBerechnung(anzahlKartons);
        gesamtUmsatzBerechnung = GesamtUmsatzBerechnung(frachtKostenProKilometer, nettoUmsatzBerechnung);
        rabatt = Rabatt(nettoUmsatzBerechnung);
        zielPreis = ZielPreisBerechnung(gesamtUmsatzBerechnung, rabatt);

        cout << "Frachtberechnung" << endl;
        cout << "----------------" << endl;
        cout << endl;
        cout << endl;
        cout << "Anzahl Kartons" << setw(6) << ":" << setw(4) << anzahlKartons << endl;
        cout << "Kilometer" << setw(11) << ":" << setw(4) << anzahlKilometers << endl;
        cout << "Gewicht" << setw(13) << ":" << setw(4) << bruttoGewicht << endl;
        cout << "Berechnetes Gewicht" << setw(1) << ":" << setw(4) << berechnetGewicht << endl;
        cout << endl;
        cout << "Fracht" << setw(14) << fixed << ":" << setw(4) << fixed << setprecision(2) << frachtKostenProKilometer << "  EUR" << endl;
        cout << "Nettoumsatz" << setw(9) << fixed << ":" << setw(4) << fixed << setprecision(2) << nettoUmsatzBerechnung << "  EUR" << endl;
        cout << "Gesamtumsatz" << setw(8) << fixed << ":" << setw(4) << fixed << setprecision(2) << gesamtUmsatzBerechnung << "  EUR" << endl;
        cout << "Rabatt" << setw(14) << fixed << ":" << setw(4) << fixed << setprecision(2) << rabatt << "  EUR" << endl;
        cout << "Zielpreis" << setw(11) << fixed << ":" << setw(4) << fixed << setprecision(2) << zielPreis << "  EUR" << endl;
        cout << endl;
        cout << endl;
    } while (anzahlKartons > 0);


    return 0;
}
