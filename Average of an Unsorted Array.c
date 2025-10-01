#include <stdio.h>

int main() {
    int n, sum = 0, avg;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;
    printf("Average is: %d\n", avg);

    return 0;
}
