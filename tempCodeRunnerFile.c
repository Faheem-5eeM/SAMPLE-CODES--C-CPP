#include <stdio.h>

int main() {
    int i, j, k, m, n;

    printf("Enter an integer:\n");
    scanf("%d", &n);

    // Print the top row
    for (i = 0; i < n; i++) {
        printf("|");
    }

    // Print the middle rows
    for (j = 0; j < n - 2; j++) {
        printf("\n|");
        for (k = 0; k < n - 2; k++) {
            printf(" ");
        }
        printf("|");
    }

    // Print the bottom row
    printf("\n");
    for (m = 0; m < n; m++) {
        printf("|");
    }

    return 0;
}
