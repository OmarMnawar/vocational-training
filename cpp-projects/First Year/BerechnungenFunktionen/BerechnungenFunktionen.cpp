/* Omar Mnawar */
/* Aufgabe 7.3 */

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int minimum(int array[], int arraySize);
int maximum(int array[], int arraySize);
int medians(int array[], int arraySize);
int spannweite(int array[], int arraySize);
int middleValue(int array[], int arraySize);
int repetitionValues(int array[], int arraySize);


int minimum(int array[], int arraySize)
{
	int minValue = array[0];

	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] < minValue)
		{
			minValue = array[i];
		}
	}

	return minValue;
}
int maximum(int array[], int arraySize)
{
	int maxValue = 0;

	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] > maxValue)
		{
			maxValue = array[i];
		}
	}

	return maxValue;
}
int medians(int array[], int arraySize)
{
	sort(array, array + arraySize);

	return array[arraySize / 2];
}
int spannweite(int array[], int arraySize)
{
	int index = 0;

	sort(array, array + arraySize);
	int minValue = minimum(array, arraySize);
	int maxValue = maximum(array, arraySize);
	

	for (int i = 0; i < arraySize; i++)
	{
		if (minValue == array[i])
		{
			index = i;
		}

		if (maxValue != array[i])
		{
			index++;
		}
	}

	return index;
}
int middleValue(int array[], int arraySize)
{
	int summe = 0;
	int mittleWert = 0;
	int mittleWertAbweichung = 0;

	for (int i = 0; i < arraySize; i++)
	{
		summe += array[i];
	}

	mittleWert = summe / arraySize;
	
	for (int i = 0; i < arraySize; i++)
	{
		mittleWertAbweichung += (array[i] - mittleWert);
	}

	return mittleWertAbweichung / arraySize;
}

int repetitionValues(int array[], int arraySize)
{
	sort(array, array + arraySize);


}


int main()

{
	locale::global(locale("de_DE.UTF-8"));

	srand((unsigned)time(NULL));
	int choice = 0;
	char endProgram = 'n';

	do
	{
		// OM: Um den Bildschrim zu bereinigen nach dem wiederholung.
		system("cls");

		cout << "======== Messreihe im Elektrotechnik ========" << endl;
		cout << "======== Auswahl Menü =======================" << endl;
		cout << "1) Minimum Messwerte" << endl;
		cout << "2) Maximum Messwerte" << endl;
		cout << "3) Medians Messwerte" << endl;
		cout << "4) Spannweite wert" << endl;
		cout << "5) Mittleren Abweichung der Messwerte" << endl;

		cout << endl;
		cout << "Bitte geben Sie Ihren Wahl ein: ";
		cin >> choice;

		while (choice <= 0 || choice > 5)
		{
			cout << "Bitte wählen Sie einen gultigen Berechnung von den Auswahl Menü aus." << endl;
			cout << "Auswahl: ";
			cin >> choice;
		}


		int numb[100] = {};

		for (int i = 0; i < 100; i++)
		{
			numb[i] = rand() % 1000;
		}


		switch (choice)
		{
			// OM: Minimum
		case 1:
			cout << "Minimum Wert: " << minimum(numb, 100) << endl;
			break;
			// OM: Maximum
		case 2:
			cout << "Maximum Wert: " << maximum(numb, 100) << endl;
			break;

			// OM: Medians
		case 3:
			cout << "Medians Wert: " << medians(numb, 100) << endl;
			break;

			// OM: Spannweite
		case 4:
			cout << "Spannweite Wert: " << spannweite(numb, 100) << endl;
			break;

			// OM: Millteren Wert
		case 5:
			cout << "Mittelwert: " << middleValue(numb, 100) << endl;
			break;
		}


		cout << endl;

		cout << "Möchten Sie nochmal berechnen? \nGeben Sie <j/J> else <n/N um den Programm zu beenden: ";
		cin >> endProgram;



	} while (endProgram != 'n' && endProgram != 'N');


	return 0;
}