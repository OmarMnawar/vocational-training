/* ==== Omar Mnawar 15.06.2026 ==== */
/* ==== Aufgabe New Delete ======== */

#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	int array[10] = { };

	int geradeZahlenAnzahl = 0;
	int ungeradeZahlenAnzahl = 0;

	int* pGeradeZahlenArray = new int[geradeZahlenAnzahl];
	int* pUngeradeZahlenArray = new int[geradeZahlenAnzahl];
	srand((unsigned(time(NULL))));


	for (int i = 0; i < 10; i++)
	{
		array[i] = rand();
	}


	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << ", ";

		if ((array[i] % 2) == 0)
		{
			pGeradeZahlenArray = &array[i];
			geradeZahlenAnzahl++;
		}
		else
		{
			pUngeradeZahlenArray = &array[i];
			ungeradeZahlenAnzahl++;
		}
	}


	cout << endl;
	cout << "Ausgabe der " << geradeZahlenAnzahl << " geraden Zahlen" << endl;
	for (int i = 0; i < geradeZahlenAnzahl; i++)
	{
		cout << *(pGeradeZahlenArray + 1) << ", " << endl;
	}
	cout << "Ausgabe der " << ungeradeZahlenAnzahl << " ungeraden Zahlen" << endl;



	delete[]pGeradeZahlenArray;
	delete[]pUngeradeZahlenArray;

}