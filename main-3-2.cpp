#include <iostream>

extern int *reverseArray(int *numbers1, int length);
extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main()
{
    int *p = readNumbers();
    std::cout << equalsArray(reverseArray(p, 10), p, 10) << std::endl;
    delete p;
    return 0;
}