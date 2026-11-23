
#include <stdio.h>

int a[10][10], visited[10], q[10];
int n, f=0, r=-1;

void BFS(int v)
{
    int i;
    visited[v]=1;
    q[++r]=v;

    while(f<=r)
    {
        v=q[f++];
        printf("%d ",v);

        for(i=0;i<n;i++)
            if(a[v][i] && !visited[i])
            {
                visited[i]=1;
                q[++r]=i;
            }
    }
}

int main()
{
    int i,j,s;

    printf("Enter vertices: ");
    scanf("%d",&n);

    printf("Enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("Enter starting vertex: ");
    scanf("%d",&s);

    printf("BFS: ");
    BFS(s);

    return 0;
}
