#include<stdio.h>
struct Student
{
    int roll;
    char name[30];
    float marks;
};
int main()
{
    struct Student S1;
    printf("Enter the roll: ");
    scanf("%d",&S1.roll);
    printf("Enter the name: ");
    scanf(" %[^\n]",S1.name);
    printf("Enter the marks: ");
    scanf("%f",&S1.marks);

    printf("roll: %d\nName: %s\nMakrs: %f\n",S1.roll,S1.name,S1.marks);
    return 0;
}