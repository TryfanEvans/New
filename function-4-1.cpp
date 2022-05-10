int *sparse_count(int **vals, int num_rows, int num_cols)
{
    int zero_entities = 0;
    int non_zero_entities = 0;
    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_cols; j++)
        {
            if (vals[i][j] == 0)
            {
                zero_entities++;
            }
            else
            {
                non_zero_entities++;
            }
        }
    }
    int *arr = new int[2];
    arr[0] = zero_entities;
    arr[1] = non_zero_entities;
    return arr;
}