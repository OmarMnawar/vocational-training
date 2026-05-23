// OM: Aufgabe Zinseszins.

#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;


// OM: WertTabelle:
/*
* Kapital = 1500
* Prozentsatz = 1.5
* anlagerdauer = 5
* Ergebnis auf der Bildschrim:
*
* Kapitalbetrag fuer die angegebene Jahr: 5
*
* Der Kapitalbetrag fuer dieses Jahr betrõgt: 22.50
* Der Kapitalbetrag fuer dieses Jahr betrõgt: 22.84
* Der Kapitalbetrag fuer dieses Jahr betrõgt: 23.18
* Der Kapitalbetrag fuer dieses Jahr betrõgt: 23.53
* Der Kapitalbetrag fuer dieses Jahr betrõgt: 23.88
* Das Endkapital betraegt: 1615.93EUR nach 5.00 Jahren
*/

int main()
{
	double anfangskapital = 0;
	double prozentsatz = 0;
	double anlagerdauer = 0;
	char neueZeile = '\n';
	double zinssatz = 0;
	double endKapital = 0;

	// OM: Programm.
	cout << "Programm: Zinseszinsberechnung" << endl;
	cout << "==============================" << endl;
	cout << neueZeile; // neue Zeile.

	// OM: Kapitel vom Benutzer auslesen.
	cout << "Bitte geben Sie das Anfangskapital ein : ";
	cin >> anfangskapital;
	cout << neueZeile; // neue Zeile.

	// OM: Zinsen vom Benutzer auslesen.
	cout << "Bitte geben Sie den Prozentsatz ein : ";
	cin >> prozentsatz;
	cout << neueZeile; // neue Zeile.

	// OM: Dauer im Jahren vom Benutzer auslesen.
	cout << "Bitte geben Sie die Anlagerdauer ein : ";
	cin >> anlagerdauer;
	cout << neueZeile; // neue Zeile.
	cout << neueZeile; // neue Zeile.

	// OM: Überschrifft.
	cout << "Kapitalbetrag fuer die angegebene Jahr: " << anlagerdauer << neueZeile << endl;

	for (int i = 1; i <= anlagerdauer; i++)
	{
		zinssatz = anfangskapital * prozentsatz / 100;

		cout << "Der Kapitalbetrag fuer dieses Jahr beträgt: " << fixed << setprecision(2) << zinssatz << endl;		

		endKapital = anfangskapital + zinssatz;		
		anfangskapital += zinssatz;
	}

	// OM: Am Ende geben wir eine neueZeile, damit die Texte von Konsole nicht so nach and das End Ergebnis
	cout << neueZeile << "Das Endkapital betraegt: " << endKapital << "EUR nach " << anlagerdauer << " Jahren" << endl;

	return 0;
}
