#include <stdio.h>

int main(void) {
    int numbers[] = {1, 2, 3, 4, 5};  // Example array
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Number of elements
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    printf("The sum of the array is: %d\n", sum);

    return 0;
}
