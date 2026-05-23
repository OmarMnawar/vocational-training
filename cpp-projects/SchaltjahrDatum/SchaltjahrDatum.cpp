#include <iostream>
using namespace std;

int tag = 1;
int monat = 1;
int jahr = 1;

int main()
{
	cout << "Dieses Programm ergibt wieder ein Datum formatiert zurueck und uberprueft," << endl;
	cout << "ob es ein schaltjahr ist oder nicht." << endl;
	cout << "Datum Format ist TT.MM.JJJJ" << endl;

	cout << "Gib einen Tag ein: ";
	cin >> tag;

	while (tag < 1 || tag > 31)
	{
		cout << "Bitte gib ein logisches Tag ein." << endl;
		cin >> tag;
	}

	cout << "Gib einen Monat ein: ";
	cin >> monat;

	while (monat < 1 || monat > 12)
	{
		cout << "Bitte gib ein logisches Monat ein." << endl;
		cin >> monat;
	}

	cout << "Gib ein Jahr ein: ";
	cin >> jahr;

	while (jahr < 1 || jahr > 9999)
	{
		cout << "Bitte gib ein logisches Jahr ein." << endl;
		cin >> jahr;
	}

	// Omar: Hier geht es um 31 Tage am monat.
	if (monat == 4 || monat == 6 || monat == 9 || monat == 11)
	{
		if (tag > 30)
		{
			cout << "angegebenen Tag ist groesser als ublich fuer April, Juni, September und November.\nDeswegen bitte nochmal versuchen." << endl;

			while (tag < 1 || tag > 30)
			{
				cout << "Bitte gib ein logisches Tag fuer April, Juni, September und November ein." << endl;
				cin >> tag;
			}
		}
	}

	// Omar: Hier ueberpruefen ich, ob es um ein Schaltjahr handelt.
	bool istEinSchaltJahr = false;

	if (jahr % 400 == 0)
	{
		istEinSchaltJahr = true;
	}
	else if (jahr % 100 == 0)
	{
		istEinSchaltJahr = false;
	}
	else if (jahr % 4 == 0)
	{
		istEinSchaltJahr = true;
	}
	else
	{
		istEinSchaltJahr = false;
	}

	if (istEinSchaltJahr)
	{
		if (tag > 29 && monat == 2)
		{
			cout << "angegebenen Tag ist groesser als ublich fuer Februar im Schaltjahr.\nDeswegen bitte nochmal versuchen." << endl;

			while (tag < 1 || tag > 29)
			{
				cout << "Bitte gib ein logisches fuer Februar im Schaltjahr Tag ein." << endl;
				cin >> tag;
			}
		}
	}
	else if (tag > 28 && monat == 2)
	{
		cout << "angegebenen Tag ist groesser als ublich fuer Februar.\nDeswegen bitte nochmal versuchen." << endl;

		while (tag < 1 || tag > 28)
		{
			cout << "Bitte gib ein logisches Tag fuer Februar ein." << endl;
			cin >> tag;
		}
	}

	cout << tag << "." << monat << "." << jahr << endl;

	if (istEinSchaltJahr == true)
	{
		cout << "Dieses Jahr ist ein Schalt Jahr." << endl;
	}
	else
	{
		cout << "Dieses Jahr ist nicht ein Schalt Jahr." << endl;
	}
}