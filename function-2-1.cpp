#include <iostream>

using namespace std;

string lookup_spectrum(int day)
{
    if (day < 1 || day > 7)
    {
        return "invalid colour";
    }
    string colors[7] = {"Red",
                        "Orange",
                        "Yellow",
                        "Green",
                        "Blue",
                        "Indigo",
                        "Violet"};
    return colors[day - 1];
}