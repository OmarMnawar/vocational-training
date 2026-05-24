#include <stdio.h>
#include <iostream>
#include "Headers/Eingaben.h"
#include "Headers/DatumHelper.h"

using namespace std;


void NimmEingaben()
{
	setlocale(LC_ALL, "German");

	int tag = 1;
	int monat = 1;
	int jahr = 2026;
	bool schaltjahr = false;

	cout << "Dieses Programm wird �berpr�fen, ob der angegebnen Datum g�ltig ist und ein schaltjahr ist oder nicht." << endl;
	cout << "Bitte gibt den Datum ein: " << endl;

	do
	{
		cout << "Tag: ";
		cin >> tag;
		cout << "Monat: ";
		cin >> monat;
		cout << "Jahr: ";
		cin >> jahr;
		cout << endl;

		schaltjahr = UeperpruefSchaltjahr(jahr);

	} while (KorrektDatumEingaben(tag, monat, jahr) == false);

	FormatDatum(tag, monat, jahr);

	if (schaltjahr == false)
	{
		cout << "F�r die angegebnen Datum ist es kein Schaltjahr." << endl;
	}
	else
	{
		cout << "F�r die angegebnen Datum ist es einen Schaltjahr." << endl;
	}

}


void TagErmitteln(int tag, int monta)
{

}