#include <stdio.h>
#include <stdlib.h>
#define SIZE 10


void print_arr(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int bubble_sort(void) {
    printf("=== 버블솔트 ===\n");

    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = 1 + rand() % 1000;
    }

    print_arr(arr);

    int tmp;

    for (int k = 0; k < SIZE; k++) {
        for (int j = 0; j < SIZE - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    print_arr(arr);


    return 0;
}