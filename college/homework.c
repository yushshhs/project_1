#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Original: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    int start = 0;
    int end = size - 1;
    while(start < end) {
        int temp = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = temp;
        start++;
        end--;
    }

    printf("\nReversed: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}