#include <iostream>
using namespace std;

extern string lookup_spectrum(int day);

int main()
{
    cout << lookup_spectrum(3) << endl;
    return 0;
}