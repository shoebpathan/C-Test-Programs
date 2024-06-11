#include <stdio.h>
//Lower Trangle
int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for rows
    for (i = 1; i <= n; i++) {
        // Loop for printing spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Loop for printing stars
        for (j = i; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
/*

* * * * * * * 
 * * * * * * 
  * * * * * 
   * * * * 
    * * * 
     * * 
      * 

*/