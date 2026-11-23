
#include <stdio.h>

int a[10][10], visited[10], n;

void DFS(int v)
{
    int i;
    visited[v] = 1;
    printf("%d ", v);

    for(i=0; i<n; i++)
        if(a[v][i] && !visited[i])
            DFS(i);
}

int main()
{
    int i, j, s;

    printf("Enter vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d", &s);

    printf("DFS Traversal: ");
    DFS(s);

    return 0;
}
