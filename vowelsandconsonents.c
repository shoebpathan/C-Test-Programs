#include<stdio.h> 
int main() 
{ 
    int vowels = 0, consonants = 0  ; 
    char str[] = "Shoeb Pathan"; 
 
    for (int  i = 0; str[i] != '\0'; i++)
    { 
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
         str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ) 
        { 
            vowels ++; 
        } 
        else  
        { 
            consonants ++;
        } 
    } 
 
    printf("\n The Vowels are : = %d ",vowels); 
    printf("\n The Consonants are : = %d ",consonants); 
 
    return 0  ;  
}