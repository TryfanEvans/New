#include <iostream>

int *create_ints(int num_vals)
{
    int *a = new int[num_vals];
    for (int i = 0; i < num_vals; i++)
    {
        a[i] = i * 5;
    }
    return a;
}

void display_array(int *vals, int num_vals)
{
    for (int i = 0; i < num_vals; i++)
    {
        std::cout << vals[i] << " ";
    }
    std::cout << "\n";
}