#include <stdio.h>
int main()
{

    int n, m, i, j, k;
    n = 5;
    m = 3;
    int alloc[5][3] = {{1, 0, 0},
                       {2, 1, 0},
                       {1, 1, 1},
                       {1, 1, 0},
                       {0, 0, 2}};

    int max[5][3] = {{5, 1, 1},
                     {2, 2, 0},
                     {1, 2, 1},
                     {1, 1, 1},
                     {0, 0, 2}};

    int avail[3] = {3, 1, 1};

    int f[n], ans[n], ind = 0;
    for (k = 0; k < n; k++)
    {
        f[k] = 0;
    }
    int need[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
    }
    printf("Allocation Matrix \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf(" %d", alloc[i][j]);
        }
        printf("\n");
    }
    printf("Max Matrix \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf(" %d", max[i][j]);
        }
        printf("\n");
    }
    printf("Need Matrix \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf(" %d", need[i][j]);
        }
        printf("\n");
    }
    int y = 0;
    for (k = 0; k < 5; k++)
    {
        for (i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {

                int flag = 0;
                for (j = 0; j < m; j++)
                {
                    if (need[i][j] > avail[j])
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                {
                    ans[ind++] = i;
                    for (y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 0)
        {
            flag = 0;
            printf("SYSTEM NOT SAFE");
            break;
        }
    }
    if (flag == 1)
    {
        printf("SYSTEM SAFE\n");
        for (i = 0; i < n - 1; i++)
            printf(" P%d ->", ans[i]);
        printf(" P%d", ans[n - 1]);
    }
    return (0);
}
