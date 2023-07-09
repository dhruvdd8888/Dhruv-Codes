#include <stdio.h>
#include <stdlib.h>

// function to convert an array representation of a binary tree to its level order traversal
void arrayToLevelOrder(int arr[], int n) {
    if (n == 0) {
        printf("The array is empty.\n");
        return;
    }
    int i = 0, j;
    // print the level order traversal of the binary tree
    printf("[");
    while (i < n) {
        j = i;
        printf("[");
        while (j <= i * 2 && j < n) {
            if (arr[j] != -1) {
                printf("%d,", arr[j]);
            }
            j++;
        }
        i = i * 2 + 1;
        printf("\b],");
    }
    printf("\b]");
}

// driver code
int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("[");
    int i = 0, j;
    while (i < n) {
        j = i;
        printf("[");
        while (j <= i * 2 && j < n) {
            if (arr[j] != -1) {
                printf("%d,", arr[j]);
            }
            j++;
        }
        i = i * 2 + 1;
        printf("\b],");
    }
    printf("\b]");
    // arrayToLevelOrder(arr, n);
    return 0;
}
