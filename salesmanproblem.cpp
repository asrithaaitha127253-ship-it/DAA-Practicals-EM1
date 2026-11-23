
#include <stdio.h>

int n, cost[10][10], visited[10];
int minCost = 9999;

void tsp(int city, int count, int total)
{
    if(count == n && cost[city][0])
    {
        if(total + cost[city][0] < minCost)
            minCost = total + cost[city][0];
        return;
    }

    for(int i=0; i<n; i++)
    {
        if(!visited[i] && cost[city][i])
        {
            visited[i] = 1;
            tsp(i, count+1, total+cost[city][i]);
            visited[i] = 0;
        }
    }
}

int main()
{
    printf("Enter number of cities: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &cost[i][j]);

    visited[0] = 1;
    tsp(0, 1, 0);

    printf("Minimum travel cost = %d", minCost);

    return 0;
}
