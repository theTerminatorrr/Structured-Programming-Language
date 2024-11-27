#include <stdio.h>
void moveZerosToStart(int arr[], int n)
{
    int temp[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[j++] = arr[i];
        }
    }

    int zeroCount = n - j;
    for (int i = 0; i < zeroCount; i++)
    {
        arr[i] = 0;
    }
    for (int i = zeroCount, k = 0; i < n; i++, k++)
    {
        arr[i] = temp[k];
    }
}

int main()
{
    int n;
    printf("Enter your Array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the Elements of your Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    moveZerosToStart(arr, n);

    printf("The Modified Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
