#include <stdio.h>
int main()
{
    int n, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Leaders: ");

    for (i = n - 1; i >= 0; i--)
    {
        int is_leader = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                is_leader = 0;
                break;
            }
        }
        if (is_leader)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
