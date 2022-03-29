#include <iostream>
int *reverseArray(int *numbers1, int length)
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[9 - i] = numbers1[i];
    }
    return arr;
}

int *readNumbers()
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {

        std::cin >> arr[i];
    }
    return arr;
}

void printNumbers(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}

bool equalsArray(int *numbers1, int *numbers2, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] != numbers2[i])
        {
            return false;
        }
    }
    return true;
}