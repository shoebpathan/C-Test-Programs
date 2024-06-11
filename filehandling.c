#include <stdio.h>
#include <string.h>
//file handling
struct Student 
{
   int id ;
   char name[20];
   int age;
};

int main(){

    FILE *file =fopen("Data.txt","w");
    fprintf(file,"Pathan ");

struct Student student;
    printf("\nId = ");
    scanf("%d",&student.id);

    printf("\nName = ");
    scanf("%s",&student.name);

    printf("\nAge = ");
    scanf("%d",&student.age);

    if (file==NULL)
    {
       printf("Unable the text file\n");
       return 1;
    }

    fprintf(file,"id = %d name= %s age= %d",student.id,student.name,student.age);
    
    fclose(file);


}