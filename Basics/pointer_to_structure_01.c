#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    float marks;
    char name[20];
};
int main()
{
    struct student s1;
    struct student *ptr;   //pointer to structure
    ptr=&s1;
    printf("Enter the name,roll,marks: ");
    scanf("%s%d%f",ptr->name,&ptr->roll,&ptr->marks);
    printf("=======Student Information======\n");
    printf("name: %s\nRoll: %d\nMark: %f\n",ptr->name,ptr->roll,ptr->marks);
    
    ptr->roll=47;         //modifying the structure element using pointer indirrectely
    ptr->marks=90;
    strcpy(ptr->name,"sanket");

    printf("=======Modified Student Information======\n");
    printf("name: %s\nRoll: %d\nMark: %f\n",ptr->name,ptr->roll,ptr->marks);
}