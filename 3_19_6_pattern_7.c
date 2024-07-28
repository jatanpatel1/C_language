/*
 1  2  3  4  5  6  7  8  9 10
36 37 38 39 40 41 42 43 44 11
35 64 65 66 67 68 69 70 45 12
34 63 84 85 86 87 88 71 46 13
33 62 83 96 97 98 89 72 47 14
32 61 82 95 100 99 90 73 48 15
31 60 81 94 93 92 91 74 49 16
30 59 80 79 78 77 76 75 50 17
29 58 57 56 55 54 53 52 51 18
28 27 26 25 24 23 22 21 20 19

*/
#include <stdio.h>

int main () {
    int n = 10;
    int i, row = 0, col = 0;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int direction = 0;
    int value = 1;

    // Initialize a 2D array with 0
    int matrix[n][n];
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }

    while (top <= bottom && left <= right) {
        if (direction == 0) {  // left to right
            for (col = left; col <= right; col++) {
                matrix[top][col] = value++;
            }
            top++;
    }

    // Print the 2D array
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    }

    return 0;
}



