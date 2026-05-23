/* Omar Mnawar 23.02.2026 */
// Aufgabe RekursiveFunktionen

#include <iostream>

int factorial(int number);
int querSumme(int number);
int Fibonacci(int firstNumber, int secondNumber, int number);


int factorial(int number)
{
	if (number == 1)
		return 1;
	else if (number <= 0)
		return 0;

	return number * factorial(number - 1);
}

int querSumme(int number)
{

	if (number <= 1)
		return number;

	return number % 10 + querSumme(number / 10);
}

int Fibonacci(int firstNumber, int secondNumber, int number)
{
	if (number <= 0)
		return 0;

	int reachedNum = firstNumber + secondNumber;

	std::cout << reachedNum << ", ";

	return Fibonacci(secondNumber, reachedNum, number - 1);
}



int main()
{

	// OM: Diese funktioniert leider nicht.
	std::locale::global(std::locale("de_DE"));

	int endFact = 0;
	int endQuersumme = 0;
	int endFibonacci = 0;

	// OM: Fakultät
	do
	{
		int factorialNumber = 0;

		std::cout << "=================" << std::endl;
		std::cout << "Fakultät Programm" << std::endl;
		std::cout << "=================" << std::endl;
		std::cout << std::endl;
		std::cout << "Bitte geben Sie eine Nummer, um die Fakultät zu berechnen: ";
		std::cin >> factorialNumber;
		std::cout << "Fakulität der Nummer: " << factorialNumber << "\nIst: " << factorial(factorialNumber) << std::endl;
		std::cout << std::endl;
		std::cout << "Wollen Sie die Fakultät Berechnung beenden?\nGeben Sie dann Null oder Weniger." << std::endl;
		std::cout << "Antwort: ";
		std::cin >> endFact;


	} while (endFact >= 1);


	// OM: Quersumme
	do
	{
		int quersumeNumber = 0;

		std::cout << "=================" << std::endl;
		std::cout << "Quersumme Programm" << std::endl;
		std::cout << "=================" << std::endl;
		std::cout << std::endl;
		std::cout << "Bitte geben Sie eine Nummer, um die Quersumme zu berechnen: ";
		std::cin >> quersumeNumber;
		std::cout << "Quersumme der Nummer: " << quersumeNumber << "\nIst: " << querSumme(quersumeNumber) << std::endl;
		std::cout << std::endl;
		std::cout << "Wollen Sie die Quersumme Berechnung beenden?\nGeben Sie dann Null oder Weniger." << std::endl;
		std::cout << "Antwort: ";
		std::cin >> endQuersumme;


	} while (endQuersumme >= 1);

	// OM: Fibonacci
	do
	{
		int fibonacci = 0;

		std::cout << "=================" << std::endl;
		std::cout << "Fibonacci Programm" << std::endl;
		std::cout << "=================" << std::endl;
		std::cout << std::endl;
		std::cout << "Bitte geben Sie eine Nummer, um die Fibonacci zu berechnen: ";
		std::cin >> fibonacci;
		std::cout << "Fibonacci der Nummer: " << fibonacci << "\nIst: ";
		std::cout << Fibonacci(0, 1, fibonacci);
		std::cout << std::endl;
		std::cout << "Wollen Sie die Fibonacci Berechnung beenden?\nGeben Sie dann Null oder Weniger." << std::endl;
		std::cout << "Antwort: ";
		std::cin >> endFibonacci;

	} while (endFibonacci >= 1);

	return 0;
}