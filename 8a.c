#include <stdio.h>
int main()
{
    int a[10][10], s[100][3];
    int m, n, i, j, k = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &m, &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Store non-zero elements
    s[0][0] = m;
    s[0][1] = n;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != 0)
            {
                s[k][0] = i;
                s[k][1] = j;
                s[k][2] = a[i][j];
                k++;
            }
        }
    }

    s[0][2] = k - 1;

    printf("\nSparse Matrix (3-Tuple Representation):\n");

    for(i = 0; i < k; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
