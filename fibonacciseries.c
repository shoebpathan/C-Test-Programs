#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d",&n);

    printf("Fibonacci series up to %d: ",n);
    printf("%d %d ",a,b);
    
    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}