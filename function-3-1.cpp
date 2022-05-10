#include <iostream>

void odd_even(int vals[], int exmpl, int length)
{
    for (int i = 0; i < length; i++)
    {

        if (vals[i] % 2 == exmpl % 2 || exmpl == 0)
        {
            std::cout << i << ":" << vals[i] << " ";
        }
    }
    std::cout << "\n";
};