/* ==== Omar Mnawar ==== */
/* ==== AufgabeGehalt == */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double bruttoGehalt = 0;
	/*
	* Omar: man kann direkt den berechnete zahl von prozent geben oder hier durch 100 machen.
	*/
	const double lohnsteuer = 25;
	const double krichensteuer = 9;
	const double krankenversicherung = 14.6;
	const double pflegeversicherung = 3.6;
	const double rentenversicherung = 18.6;
	const double arbeitslosenversicherung = 2.6;

	const double arbeitgeberTeil = 2;

	char endProgramm = 'n';

	do
	{
		cout << "Bitte geben Sie Ihren Gehalt im Brutto ein: ";
		cin >> bruttoGehalt;
		double berechnungLohnsteuer = bruttoGehalt * (lohnsteuer / 100);
		double berechnungKirchensteuer = berechnungLohnsteuer * (krichensteuer / 100);
		double berechnungGesamtSteuer = berechnungLohnsteuer + berechnungKirchensteuer;
		double berechnungKrankenversicherung = bruttoGehalt * (krankenversicherung / 100) / arbeitgeberTeil;
		double berechnungPflegeversicherung = bruttoGehalt * (pflegeversicherung / 100) / arbeitgeberTeil;
		double berechnungRentenversicherung = bruttoGehalt * (rentenversicherung / 100) / arbeitgeberTeil;
		double berechnungArbeitslosenversicherung = bruttoGehalt * (arbeitslosenversicherung / 100) / arbeitgeberTeil;
		double berechnungGesamtSozial = berechnungKrankenversicherung + berechnungPflegeversicherung + berechnungRentenversicherung + berechnungArbeitslosenversicherung;
		double berechnungNettoGehalt = bruttoGehalt - berechnungGesamtSozial - berechnungGesamtSteuer;
		cout << left << setw(40) << "Entsprechend den oben gemachten Eingaben ergibt sich die" << endl <<
			"Gehaltsabrechnung wie folgt:" << endl;
		cout << left << setw(40) << "Gesamtgehalt Brutto: " << right << setw(40) << setprecision(2) << fixed << bruttoGehalt << " EUR" << endl;
		cout << left << setw(40) << "Steuerrechtliche Abzuege" << endl;
		cout << left << setw(40) << "Lohnsteuer:" << right << setw(40) << setprecision(2) << fixed << berechnungLohnsteuer << " EUR" << endl;
		cout << left << setw(40) << "Kirchensteuer:" << right << setw(40) << setprecision(2) << fixed << berechnungKirchensteuer << " EUR" << endl;
		cout << left << setw(40) << "Steuerrechtliche Abzuge (gesamt):" << right << setw(40) << setprecision(2) << fixed << berechnungGesamtSteuer << " EUR" << endl;
		cout << left << setw(40) << "Sozialversicherungsrechtliche Abzuege" << endl;
		cout << left << setw(40) << "Krankenversicherung:" << right << setw(40) << setprecision(2) << fixed << berechnungKrankenversicherung << " EUR" << endl;
		cout << left << setw(40) << "Pflegeversicherung:" << right << setw(40) << setprecision(2) << fixed << berechnungPflegeversicherung << " EUR" << endl;
		cout << left << setw(40) << "Rentenversicherung:" << right << setw(40) << setprecision(2) << fixed << berechnungRentenversicherung << " EUR" << endl;
		cout << left << setw(40) << "Arbeitslosenversicherung:" << right << setw(40) << setprecision(2) << fixed << berechnungArbeitslosenversicherung << " EUR" << endl;
		cout << left << setw(40) << "Sozialversicherungsrechtliche Abzuege (gesamt):" << right << setw(33) << setprecision(2) << fixed << berechnungGesamtSozial << " EUR" << endl;
		cout << left << setw(40) << "Netto Verdienst:" << right << setw(40) << setprecision(2) << fixed << berechnungNettoGehalt << " EUR" << endl;

		cout << "Geben Sie bitte die Nummer 1, um das Programm zu beenden: ";
		cin >> endProgramm;

	} while (endProgramm != 'n' && endProgramm != 'N');
}