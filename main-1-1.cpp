#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main()
{
    int *p = readNumbers();
    printNumbers(p, 10);
    delete p;
    return 0;
}