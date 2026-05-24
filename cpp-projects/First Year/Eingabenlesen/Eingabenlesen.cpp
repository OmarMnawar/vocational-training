// Omar Aufgabe5.1 06.10.2025
#include <iostream>
using namespace std;

float ersteNummer = 0;
float zweiteNummer = 0;
float dritteeNummer = 0;

int main()
{
	cout << "Diese Programm wird zurueck geben welche von den drei angegebenen Nummern das Minimum und Maximum." << endl;
	cout << "Bitte die erste Nummer eingeben: ";	
	cin >> ersteNummer;
	cout << "Bitte die zweite Nummer eingeben: ";
	cin >> zweiteNummer;
	cout << "Bitte die dritte Nummer eingeben: ";
	cin >> dritteeNummer;


	// Wir verweisen sie direkt hier, wir vermuten am anfang, dass die erste Nummer großer als die zweite Nummer.
	float maximum = ersteNummer;
	float minimum = zweiteNummer;
	
	// Falls es eigentlich umgekhert ist, dann inventieren wir die zahlen.
	if (maximum < zweiteNummer)
	{
		maximum = zweiteNummer;
		minimum = ersteNummer;
	}
	
	// Überprüfen, ob die dritte Zahl kleiner oder großer als die minimum und maximum und weisen wir dann zu wenn eine richtig ist.
	if (dritteeNummer < minimum)
	{
		minimum = dritteeNummer;
	}
	// Else if here, weil es macht kein sinn, dass dritte Nummer kleiner und großer als maximum und minimum sein.
	else if (dritteeNummer > maximum)
	{
		maximum = dritteeNummer;
	}

	// Output text und das Ergebnis. :)
	cout << "Maximum: " << maximum << endl;
	cout << "minimum: " << minimum << endl;
}