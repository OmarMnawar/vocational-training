/* ==== Omar Mnawwar 01.12.2025 Aufgabe Offene Schleife ==== */

#include <iostream>
#include <stdint.h>

using namespace std;

int main()
{
	double kapital = 1000000 ;
	double prozent = 4;
	double renteProJahr = 60000;
	double berechnetZinsen = 0;
	int jahren = 0;

	prozent /= 100;

	while (kapital > 0)
	{		
		berechnetZinsen = kapital * prozent;
		kapital += berechnetZinsen;
		kapital -= renteProJahr;

		if (kapital < 0)
		{
			cout << "Noch einen Jahr und dann geht er in die Minus." << endl;
			break;
		}

		jahren++;

		cout << "Jahr: " << jahren << " Verbleibende Geld: " << kapital << endl;

	}
	cout << "Ueberlebende Jahren:" << jahren << endl;
}