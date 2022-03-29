#include <iostream>

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
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " " << numbers[i] << std::endl;
    }
    delete numbers;
}

void hexDigits(int *numbers, int length)
{
    for (int i = 0; i < 10; i++)
    {
        std::string output;
        switch (numbers[i])
        {
        case 10:
            output = 'A';
            break;
        case 11:
            output = 'B';
            break;
        case 12:
            output = 'C';
            break;
        case 13:
            output = 'D';
            break;
        case 14:
            output = 'E';
            break;
        case 15:
            output = 'F';
            break;
        default:
            output = std::to_string(numbers[i]);
            break;
        }
        std::cout << i << " " << output;
        std::cout << std::endl;
    }
}