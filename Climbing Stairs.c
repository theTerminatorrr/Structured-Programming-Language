#include <stdio.h>
int climbStairs(int n)
{
    int prev = 1;
    int prev_prev = 1;

    for (int i = 1; i < n; i++)
    {
        int temp = prev;
        prev += prev_prev;
        prev_prev = temp;
    }
    return prev;
}

int main()
{
    int n;

    printf("Number of ways to climb %d stairs: %d\n", n, result);
    scanf("%d",&n);

    int result = climbStairs(n);
    printf("Number of ways to climb %d stairs: %d\n", n, result);

    return 0;
}
