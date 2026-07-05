/* ==== Omar Mnawar ============== */
/* ==== Aufgabe Zeichnenkette ==== */

#include <iostream>
#include <cstdlib>

using namespace std;

int charCount(char chars[], char c);
bool palindrome(char chars[]);
void flip(char chars[]);
long charTolong(char chars[]);


int charCount(char chars[], char c)
{
	int count = 0;
	int index = 0;

	while (chars[index] != '\0')
	{
		if (chars[index] == c)
		{
			count++;
		}

		index++;
	}

	return count;
}

bool palindrome(char chars[])
{
	bool isPalindrome = true;

	int index = 0;

	while (chars[index] != '\0')
	{
		index++;
	}

	int startIndex = 0;
	int endIndex = index - 1;

	while (startIndex < endIndex)
	{
		if (chars[startIndex] != chars[endIndex])
		{
			isPalindrome = false;
			break;
		}

		startIndex++;
		endIndex--;
	}

	return isPalindrome;
}

void flip(char chars[])
{
	int index = 0;

	while (chars[index] != '\0')
	{
		index++;
	}

	while (index >= 0)
	{
		cout << chars[index];
		index--;
	}
}

long charTolong(char chars[])
{
	int index = 0;
	int numberIndex = 0;
	int charSize = 0;
	const char numbers[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	long foundCharNumbers[256] = { };

	while (chars[index] != '\0')
	{
		for (int i = 0; i < 10; i++)
		{
			if (chars[index] == numbers[i])
			{
				foundCharNumbers[numberIndex] = numbers[i] - '0';
				numberIndex++;
				charSize++;
				break;
			}
		}

		index++;
	}

	long convertedNumber = 0;

	for (int i = 0; i < charSize; i++)
	{
		convertedNumber *= 10;
		convertedNumber += foundCharNumbers[i];
	}

	return convertedNumber;
}

int main()
{
	char endProgramm = 'n';
	char name[128] = { };
	char pa[128] = { };
	char c = 'a';
	char numbers[128] = { };

	do
	{
		system("cls");

		cout << "==========================================" << endl;
		cout << "==== Mehrer Coole Funktionen Programm ====" << endl;
		cout << "==========================================\n" << endl;

		cout << "Geben Sie Ihre Namen ein: ";
		cin >> name;
		cout << "-------------------------------------------" << endl;
		cout << "Geben Sie die Buchstabe, die Sie nachsuchen m�chten ein: ";
		cin >> c;
		cout << "-------------------------------------------" << endl;
		cout << "Geben Sie ein Namen, um heraus zu finden, ob es ein palindrome ist.\nPalindrome ist einfach ein Begriff, der bezeichnet, dass ein Name " 
			"gleich umgekehrt ausgesprochen wird.\nAntwort: ";
		cin >> pa;
		cout << endl;
		cout << "-------------------------------------------\n" << endl;
		cout << "Name: " << name << endl;
		cout << "Gesuchte Buchstabe: " << c << endl;
		cout << "Gefunden Buchstaben in deiner Namen Anzahl: " << charCount(name, c) << endl;
		cout << "Palindrome: ";
		if (palindrome(pa) == false)
		{
			cout << "false" << endl;
		}
		else if (palindrome(pa) == true)
		{
			cout << "true" << endl;
		}
		cout << "Deinen Name umgedreht: ";
		flip(name);
		cout << endl;
		cout << endl;
		cout << "-------------------------------------------\n" << endl;
		cout << "Geben Sie jetzt ein Satz mit Nummer, um die Nummer zu filtern und als Zahl wieder zu geben: ";
		cin >> numbers;

		cout << "Gewandelte Satz zu long: " << charTolong(numbers) << endl;

		cout << "-------------------------------------------\n" << endl;
		cout << "Geben Sie <N/n> ein, um das Progarmm zu beenden: ";
		cin >> endProgramm;

	} while (endProgramm != 'n' && endProgramm != 'N');


	
	return 0;
}