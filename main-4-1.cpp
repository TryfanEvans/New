extern int *sparse_count(int **vals, int num_rows, int num_cols);

int main()
{
    int row1[] = {10, 15, 0};
    int row2[] = {0, 5, 73};
    int row3[] = {0, 0, 1};
    int *vals[] = {row1, row2, row3};
    int nrows = 3;
    int ncols = 3;

    return 0;
}