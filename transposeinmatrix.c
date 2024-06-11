#include<stdio.h> 
#define LINE printf("\n ------------------------------------------------------- \n"); 
int main()// trasnpose of the matrix  
{ 
    LINE 
    int arr[3][3] = { 
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9} 
    }; 
 
    printf("\n the array elements are : =\n"); 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        { 
            printf("| arr[%d][%d] = %d |  ",i,j,arr[j][i]); 
        } 
        printf("\n"); 
    } 
    LINE 
    return 0 ;  
}