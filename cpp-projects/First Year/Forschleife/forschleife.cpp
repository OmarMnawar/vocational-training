// Aufgabe 5.4 u. 5.6.cpp

#include <iostream>
#include <stdio.h>

using namespace std;

void ErsteAufgabe()
{

	// OM: Aufgabe 1.
	int angegebenenZahlFuerNatuerlichenZahlen = 0;

	cout << "Bitte gib eine Nummer, um alle natuerliche Zahlen bis zu den angegebenen\nZahl auf der Bildschirm zu zeigen: ";

	cin >> angegebenenZahlFuerNatuerlichenZahlen;

	cout << "Eingabe: " << angegebenenZahlFuerNatuerlichenZahlen << "   ";

	cout << "Ausgabe: ";

	for (int index = 1; index <= angegebenenZahlFuerNatuerlichenZahlen; index++)
	{
		if (index == angegebenenZahlFuerNatuerlichenZahlen)
			cout << index << endl;
		else
			cout << index << " , ";
	}

	/* OM: Wir können hier einfach diese Variable entfernen und der oben variable auf null setzten und weiter benutzten(speichert kleine Arbeitspeicher)
	Aber ich habe so entschieden. */
	int angegebenenZahlFuerGeradenZahlen = 0;

	// OM: Aufgabe 2.
	cout << "Bitte gib eine Nummer, um alle geraden Zahlen bis zu den angegebenen\nZahl auf der Bildschirm zu zeigen: ";

	cin >> angegebenenZahlFuerGeradenZahlen;

	cout << "Eingabe: " << angegebenenZahlFuerGeradenZahlen << "   ";

	cout << "Ausgabe: ";

	for (int index = angegebenenZahlFuerGeradenZahlen; index > 0; index--)
	{
		if (index % 2 == 0)
		{
			cout << index << " , ";
		}
		
	}

	// OM: Aufgabe 3.

	cout << "Hier wird von 1 bis zehn hoch gezaehlt und wieder runter gezaehlt." << endl;

	int indexHoch = 1;
	int indexRunter = 10;
	int maxCount = 20;

	// OM: Da wir sowohl von 1 bis zehn zaehlen und dann wieder runter zahlen
	// muessen wir ingesamt 20 mal in einzelne Forschleife zaehlen.

	for (int start = 0; start < maxCount; start++)
	{
		if (indexHoch < 10)
		{
			cout << indexHoch << ",";
			indexHoch++;
		}
		else if (indexRunter > 0)
		{
			// OM: Wir uberprufen wir hier, ob es letzte Zahl ist oder nicht
			// Damit wir nicht die komma am ende ausgeben.

			if (indexRunter == 1)
			{
				cout << indexRunter << endl;
				indexRunter--;
			}
			else
			{
				cout << indexRunter << ",";
				indexRunter--;
			}
		}
	}
}

void ZweiteAufgabe()
{

	// OM: Hier machen wir eine neue Zeile damit wir unsere Augen von den Texte verbrennt :)
	cout << "\n";

	int row = 11;
	int column = 11;


	for (int start = row; start > 0; start--)
	{
		for (int start2 = column; start > 0; start2--, row--)
		{
			cout << start2 << " ";
		}
		cout << endl;
	}


	cout << "\n";
	// OM: Damit beim enden die Texte der Konsole nicht unsere Augen verbrennt:)
}

int main()
{
	ErsteAufgabe();

	ZweiteAufgabe();

	return 0;
}
