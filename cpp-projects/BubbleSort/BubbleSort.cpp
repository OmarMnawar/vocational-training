/* ==== Omar Mnawar =============== */
/* ==== Aufgabe BubbleSort ========*/
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
	srand(time(0));

	int unsortedArray[10] = { };

	cout << "Sortierte Array mit 10 Zahlen:" << endl;

	int tempValue = 0;
	int tempSecondValue = 0;

	for (int i = 0; i < 10; i++)
	{
		unsortedArray[i] = rand();
	}

	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			if (unsortedArray[i] > unsortedArray[i + 1])
			{
				tempValue = unsortedArray[i];
				tempSecondValue = unsortedArray[i + 1];

				unsortedArray[i] = tempSecondValue;
				unsortedArray[i + 1] = tempValue;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << unsortedArray[i] << ",";
	}
}