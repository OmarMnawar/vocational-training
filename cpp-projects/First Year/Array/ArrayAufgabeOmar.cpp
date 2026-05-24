#include <ctime>
#include <iostream>
#include <iomanip>

int main()
{
    srand((unsigned)time(NULL));

    // OM: Damit wir die Warning weg kriegen.
    int array[10] = { };

    int max = 0;
    int maxIndex = 0;
    int min = 0;
    int minIndex = 0;

    for (int i = 0; i < 10; i++)
    {
        array[i] = rand();
        std::cout << array[i] << std::setw(12);
    }

    max = array[0];
    min = array[1];

    for (int i = 0; i < 10; i++)
    {
        if (max <= array[i])
        {
            max = array[i];
            maxIndex = i;
        }
        if (min >= array[i])
        {
            min = array[i];
            minIndex = i;
        }
    }

    std::cout << std::endl;
    std::cout << "Der groesste Wert der Liste ist " << max << " an der Stelle " << maxIndex << "." << std::endl;
    std::cout << "Der kleinste Wert der Liste ist " << min << " an der Stelle " << minIndex << "." << std::endl;


    return 0;
}