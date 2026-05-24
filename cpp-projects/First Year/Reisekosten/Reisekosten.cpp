/* ==== Omar Mnawar Aufgabe Reisekosten ==== */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string personalnummer;
	string nachname;
	int fahrzeugSchluessel;
	string fahrzeugArt;
	double kmSatz = 0.0;
	double gefahreneKm;
	double kilometergeld;

	cout << "Personalnummer: ";
	cin >> personalnummer;

	cout << "Nachname: ";
	cin >> nachname;

	cout << "Fahrzeugschluessel (1=PKW, 2=Motorrad, 3=Moped, 4=Fahrrad): ";
	cin >> fahrzeugSchluessel;

	cout << "Gefahrene Kilometer im Monat: ";
	cin >> gefahreneKm;

	switch (fahrzeugSchluessel)
	{
	case 1:
		fahrzeugArt = "PKW";
		kmSatz = 0.27;
		break;
	case 2:
		fahrzeugArt = "Motorrad";
		kmSatz = 0.12;
		break;
	case 3:
		fahrzeugArt = "Moped";
		kmSatz = 0.07;
		break;
	case 4:
		fahrzeugArt = "Fahrrad";
		kmSatz = 0.04;
		break;
	default:
		cout << "Ungueltiger Fahrzeugschluessel!" << endl;
		return 0;
	}

	kilometergeld = gefahreneKm * kmSatz;

	cout << "\n--- Monatliche Reisekostenabrechnung ---" << endl;
	cout << "Personalnummer: " << personalnummer << endl;
	cout << "Nachname:       " << nachname << endl;
	cout << "Fahrzeug:       " << fahrzeugArt << endl;
	cout << "Kilometergeld:  " << kilometergeld << " Euro" << endl;

	return 0;
}