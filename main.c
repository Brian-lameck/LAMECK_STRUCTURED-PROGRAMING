#include <stdio.h>

int main() {
    int n, i, j, count;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input values into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print unique elements
    printf("Unique elements in the array are:\n");
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                count++;
                break;  // Found a duplicate, no need to check further
            }
        }
        if (count == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
