#include<stdio.h>
int main(){
    
    int a , b , c , d , e , marks ;

    printf("\nPlease Enter the Marks of Subject to get a result : \n");

    printf("\nEnter the Marks : ");
    scanf("%d",&marks);

    if (marks>=81 && marks<=100)
    {
        printf("\nA Grade \n");
    }
    else if (marks>81 && marks<90)
    {
        printf("B Grade");
    }
    
    else if (marks>70 && marks<=80)
    {
        printf("\nC Grade \n");
    }
    else if (marks>61 && marks<=70)
    {
        printf("\nD Grade \n");
    }
    else if (marks>51 && marks<=60)
    {
        printf("\nE Grade \n");
    }
    else if (marks>=35 && marks<=50)
    {
        printf("\nPass\n");
    }
    else if (marks>=1 && marks<35)
    {
        printf("\nFail \n");
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}