#include <stdio.h>

int main() {
    int n, i;
    int max, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Sum of numbers: %d\n", sum);

    return 0;
}
