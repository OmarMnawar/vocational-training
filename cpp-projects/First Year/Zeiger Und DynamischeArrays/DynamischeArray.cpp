/* ==== Omar Mnawar 29.06.2026 ======================== */
/* ==== Aufgabe DynamischeArray ======================= */

#include <iostream>
#include <ostream>

using namespace std;

void alphabetSortierung(char** array, int arrayGrosse);
bool kommtDanach(char* name1, char* name2);
char meinTolower(char c);
void teilEins();
void teilZwei();

bool kommtDanach(char* name1, char* name2)
{
	if (name1[0] == name2[0])
	{
		int buchstabe = 1;

		char lowerName = meinTolower(name1[buchstabe]);
		char lowerName2 = meinTolower(name2[buchstabe]);

		while (lowerName == lowerName2)
		{
			lowerName = meinTolower(name1[buchstabe]);
			lowerName2 = meinTolower(name2[buchstabe]);
		
			if (lowerName == '\0' || lowerName2 == '\0')
			{
				break;
			}

			buchstabe++;
		}

		return lowerName > lowerName2;
	}
	else
	{
		return meinTolower(name1[0]) > meinTolower(name2[0]);
	}
}

void alphabetSortierung(char** array, int arrayGrosse)
{
	for (int i = 0; i < arrayGrosse - 1; i++)
	{
		for (int j = 0; j < arrayGrosse - 1; j++)
		{
			if (kommtDanach(array[j], array[j + 1]))
			{
				char* temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

char meinTolower(char c)
{
	if (c >= 'A' && c <= 'Z') 
	{
		return c + 32;
	}
	return c;
}

void teilEins()
{
	int schueleranzahl = 30;
	char** pSchulerArray;

	cout << "Wie viele Schlüler gibt es? " << endl;
	cout << "Antwort: ";
	cin >> schueleranzahl;

	pSchulerArray = new char* [schueleranzahl];

	for (int i = 0; i < schueleranzahl; i++)
	{
		pSchulerArray[i] = new char[30];
		cin >> pSchulerArray[i];
	}
	
	cout << endl << "==================" << endl;

	cout << "Unsortierte Liste:" << endl;

	cout << "==================" << endl;

	for (int i = 0; i < schueleranzahl; i++)
	{
		cout << pSchulerArray[i] << ",\n";
	}


	cout << endl << "==================" << endl;	
	cout << "Sortierte Liste:" << endl;
	cout << "==================" << endl;
	alphabetSortierung(pSchulerArray, schueleranzahl);


	
	for (int i = 0; i < schueleranzahl; i++)
	{
		cout << pSchulerArray[i] << ",\n";
		delete[] pSchulerArray[i];
	}
	
	delete[] pSchulerArray;
	cout << "==================" << endl;
}

void teilZwei()
{

}



int main()
{
	teilEins();
	//teilZwei();

}