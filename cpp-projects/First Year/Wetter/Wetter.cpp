/* ==== Omar Mnawar ==== */


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	locale::global(locale("de_DE.UTF-8"));

	int monat = 1;
	int ballons = 0;
	double pressure = 0;

	cout << "Eingabe von Luftdruck-Werten in bar." << endl;
	cout << "Letzter Beobachtungsmonat <1..12>: ";
	cin >> monat;

	cout << "Anzahl der Messballons: ";
	cin >> ballons;
	cout << endl;

	while (monat <= 12 && ballons > 20)
	{
		cout << "In einem Jahr darf nicht mehr als 20 Ballons gemessen werden." << endl;
		cout << "Bitte nochmal einen gütligen Ballons anzahl eingeben: ";
		cin >> ballons;
		cout << endl;
	}
	

	for (int i = 0; i < monat; i++)
	{
		cout << i + 1 << ". Monat." << endl;
		for (int i = 0; i < ballons; i++)
		{
			cout << "Druck bei Ballon Nr. " << i + 1 << "? " << setprecision(2) << pressure << endl;
		}
	}

	cout << endl;

	cout << "Druckmessungen." << endl;
	cout << "Feld links oben:" << "\t" << " Gesamtdurchschnitt aller gemessenen Drücke." << endl;
	cout << "Oberste Zeile <Monat 0>: Durchschnittsdrücke aller Monate bei jedem Ballon." << endl;
	cout << "Linke Spalte <Ballon 0>: Durchschnittsdrücke aller Ballons in jedem Monat." << endl;

	cout << endl;

	cout << setw(30) << "Ballon Nr." << endl;

	cout << "\t";

	for (int j = 0; j <= ballons; j++)
	{
		cout << j << "\t";
	}

	for (int i = 0; i <= monat; i++)
	{
		cout << endl;
		cout << "Monat " << i;

		for (int j = 0; j <= ballons; j++)
		{
			cout << "\t" << setprecision(2) << pressure;
		}
	}
}