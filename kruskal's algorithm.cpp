
#include <stdio.h>

int main()
{
    int n, e, i, j, u, v, min, cost=0;
    int a[10][10], visited[10]={0};

    printf("Enter vertices and edges: ");
    scanf("%d%d", &n, &e);

    printf("Enter cost matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    printf("Minimum Spanning Tree:\n");

    for(i=0;i<e;i++)
    {
        min=999;

        for(j=0;j<n;j++)
            for(int k=0;k<n;k++)
                if(a[j][k] && a[j][k]<min)
                {
                    min=a[j][k];
                    u=j;
                    v=k;
                }

        printf("%d - %d = %d\n",u,v,min);
        cost+=min;
        a[u][v]=a[v][u]=0;
    }

    printf("Minimum cost = %d",cost);

    return 0;
}

