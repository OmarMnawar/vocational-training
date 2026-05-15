/* ==== Omar Mnawar 12.01.2026. ==== */
/* ==== Aufgabe 6.2 Funktionen. ==== */

#include <iostream>

using namespace std;

int Eingabe(int wert);
void Zahlenausgabe(int wert);
double Fakultaet(double wert);

// OM: Entry Point.
int main()
{
	int angegebnenWert = 0;
	int angegebnenZahl = 1;
	int angegebnenFakultaet = 1;

	int endProgramm = 0;

	do
	{
		cout << "Bitte gib einen Wert ein, um überzuprüfen, ob den angegebnen Wert, zwischen 0 und 1000 ist." << endl;
		cout << "Ausgabe 1 = Den angegebnen Wert ist zwischen 0 und 1000.\nAusgabe 0 = Den angegebnen Wert ist nicht zwischen 0 und 1000." << endl;

		cin >> angegebnenWert;
		cout << "Ausgabe: " << Eingabe(angegebnenWert) << endl;

		cout << "Bitte gib einen Wert ein, um von 1 bis zu angegebnen Wert auszugeben." << endl;

		cin >> angegebnenZahl;
		cout << "Zähler: ";
		Zahlenausgabe(angegebnenZahl);

		cout << "Bitte gib einen Wert ein, um die Fakultät der angegebnen Wert auszugeben." << endl;

		cin >> angegebnenFakultaet;
		cout << Fakultaet(angegebnenFakultaet) << endl;

		cout << "Um das Programm zu beenden\nGeben Sie bitte die Nummer 1. " << endl;
		cin >> endProgramm;
	}
	while (endProgramm != 1);

	return 0;
}


// OM: A1
int Eingabe(int wert)
{
	if (wert >= 0 && wert <= 1000)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


// OM: A2
void Zahlenausgabe(int wert) 
{
	for (int i = 1; i <= wert; i++)
	{
		if (i < wert)
		{
			cout << i << ",";
		}
		else if (i >= wert)
		{
			cout << i << endl;
		}
	}
}

// OM: A3
double Fakultaet(double wert) 
{
	double berechnung = 1;

	for (int i = 1; i <= wert; i++)
	{
		berechnung *= i;
	}

	return berechnung;
}