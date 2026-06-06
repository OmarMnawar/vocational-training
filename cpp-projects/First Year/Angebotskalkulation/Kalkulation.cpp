#include "Headers/Kalkulation.h"

double prozentwert(double wert, double wunschProzent, double prozent)
{
    if (wert <= 0 || wunschProzent <= 0)
        return 0;

    if (prozent <= 0)
        prozent = 100;

    return  (wert * wunschProzent) / prozent;
}