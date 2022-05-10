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

// repeatedly calls the lookup_spectrum function so tests it for both valid and invalid spectrum numbers and prints the result
void test()
{
    for (int i = 1; i < 8; i++)
    {
        cout << lookup_spectrum(i) << endl;
    }
    cout << lookup_spectrum(34) << endl;
}