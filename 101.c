#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        int num = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num;
        }

        printf("\n");
    }

    return 0;
}
