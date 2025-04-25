#include <stdio.h>

void sparse(int n, int m, int arr[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != 0)
            {
                printf("[row:%d][col:%d][val:%d]\n", i, j, arr[i][j]);
            }
        }
    }
}

int main()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr[n][m]; // Declare the array after initializing n and m

    printf("Enter Matrix Elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    sparse(n, m, arr);

    return 0;
}
