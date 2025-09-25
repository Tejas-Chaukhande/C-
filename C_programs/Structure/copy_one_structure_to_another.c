#include<stdio.h>
#include<string.h>
struct Student
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct Student S1,S2;

    S1.roll=53;
    //S1.name="Tejas";  //Invalid
    strcpy(S1.name,"Tejas");  // Valid
    S1.marks=98;

    printf("%d %s %f\n",S1.roll,S1.name,S1.marks);

    S2=S1; //all the elements from S1 copying to S2
    printf("%d %s %f\n",S2.roll,S2.name,S2.marks);

    return 0;

}