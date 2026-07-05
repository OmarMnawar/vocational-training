/* ==== Omar Mnawar =========== */
/* ==== Datum: 15.06.2026 ===== */
/* ==== Aufgabe Zeiger ======== */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	int iZahl1 = 5;
	int iZahl2 = 6;
	int* piZahl1;
	int* piZahl2;


	piZahl1 = &iZahl1;
	piZahl2 = &iZahl2;

	cout << "==== Zeiger Progarmm ==== " << endl;
	cout << endl;
	cout << "Die Multipliaktion der Werte " << *piZahl1 << " und " << *piZahl2 << " ergbit: " << *piZahl1 * *piZahl2 << endl;
	cout << "Wert iZahl1:" << setw(5) << right << *piZahl1 << "!" << endl;
	cout << "Adresse iZahl1: " << setw(4) << right << &piZahl1 << "!" << endl;
	cout << "Wert piMulti1: " << setw(3) << &piZahl2 << endl;
	cout << "Adresse piMulti1: " << &piZahl2 << endl;
	cout << "Inhalt piMulti: " << setw(2) << *piZahl2 << endl;

	return 0;
}