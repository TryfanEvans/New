extern int *create_ints(int num_vals);
extern void display_array(int *vals, int num_vals);

int main()
{
    int *a = create_ints(5);
    display_array(a, 5);
    return 0;
}