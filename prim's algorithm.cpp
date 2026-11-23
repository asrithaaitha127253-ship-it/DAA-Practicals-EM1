
#include <stdio.h>

int main()
{
    int n, i, j, min, a[10][10];
    int visited[10] = {0}, cost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    visited[0] = 1;

    for(i=0;i<n-1;i++)
    {
        min = 999;
        int x=-1, y=-1;

        for(j=0;j<n;j++)
            if(visited[j])
                for(int k=0;k<n;k++)
                    if(!visited[k] && a[j][k] < min)
                    {
                        min = a[j][k];
                        x = j;
                        y = k;
                    }

        if(x == -1)
        {
            printf("Graph is disconnected");
            return 0;
        }

        printf("%d - %d = %d\n", x, y, min);
        cost += min;
        visited[y] = 1;
    }

    printf("Minimum cost = %d", cost);
    return 0;
}
