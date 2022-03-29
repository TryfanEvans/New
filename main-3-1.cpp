#include <iostream>

extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main()
{
    int *p1 = readNumbers();
    int *p2 = readNumbers();
    std::cout << equalsArray(p1, p2, 10) << std::endl;
    return 0;
}