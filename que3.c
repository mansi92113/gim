#include <stdio.h>

void priEven(int arr[], int size) {
    int found = 0;
    printf("Even numbers: ");

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found) printf("None");
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    priEven(arr, n);
    return 0;
}

