#include <stdio.h>

struct Flower
{
    int id;
    char name[20];
    char color[10];
};

int main(){

    int n;
    printf("\nEnter The Number Of Flowers = ");
    scanf("%d",&n);

    struct Flower flowers[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Details For Flower %d : \n",i+1);
        printf("ID: ");
        scanf("%d", &flowers[i].id);
        printf("Name: ");
        scanf("%s", flowers[i].name);
        printf("Color: ");
        scanf("%s", flowers[i].color);
    }
    
    printf("\nInformation of %d Flowers...!");
    for (int i = 0; i < n; i++)
    {
        printf("\nFlower %d\n",i+1);
        printf("ID = %d\n", flowers[i].id);
        printf("Name = %s\n", flowers[i].name);
        printf("Color = %s\n", flowers[i].color);
    }

    return 0 ;
}