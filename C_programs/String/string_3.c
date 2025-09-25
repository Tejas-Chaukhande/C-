#include<stdio.h>
#include<string.h>

int main()
{
    // char name[50];
    // printf("Etner the name: ");
    // scanf("%s",name);               //Tejas Chaukhande
    //                                 //In string " " and "\n" consider as 'data submission'. 
    // printf("name:- %s\n",name);       // Tejas

    
    char name2[50];
    printf("Enter the name2:");
    scanf("%[^\n]s",name2);       //Collect input upto "new line"
    printf("name2:- %s",name2);
}