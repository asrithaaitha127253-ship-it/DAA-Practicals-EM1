
#include <stdio.h>

int main()
{
    int n, amount, i, j;

    printf("Enter number of coins: ");
    scanf("%d", &n);

    int coins[n];

    printf("Enter coin values: ");
    for(i = 0; i < n; i++)
        scanf("%d", &coins[i]);

    printf("Enter amount: ");
    scanf("%d", &amount);

    int dp[amount + 1];

    for(i = 0; i <= amount; i++)
        dp[i] = 9999;

    dp[0] = 0;

    for(i = 1; i <= amount; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(coins[j] <= i)
                if(dp[i - coins[j]] + 1 < dp[i])
                    dp[i] = dp[i - coins[j]] + 1;
        }
    }

    printf("Minimum coins required = %d", dp[amount]);

    return 0;
}
