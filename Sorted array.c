#include <stdio.h>

int main()
{
    int n, x, y, i, j, temp;

    printf("Enter the number of elements (n < 100): ");
    scanf("%d", &n);

    if (n >= 100)
    {
        printf("Invalid input. n must be less than 100.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

   
    for (i = y; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
