#include <iostream>
using namespace std;

extern string lookup_spectrum(int day);

int main()
{
    cout << "4,9c4,9" << endl;
    cout << lookup_spectrum(3) << endl;
    return 0;
}