#include<stdio.h>
#include<string.h>
struct Date
{
    int date;
    int month;
    int year;
};
struct student
{
    int roll;
    float marks;
    char name[20];
    struct Date dob;
};
int main()
{
    struct student s1;
    s1.roll=53;
    s1.marks=87;
    strcpy(s1.name,"Tejas");

    s1.dob.date=18;
    s1.dob.month=10;
    s1.dob.year=2001;

    printf("====Student info====\n");
    printf("name: %s\nRoll: %d\nMarks: %f\n",s1.name,s1.roll,s1.marks);
    printf("DOB: %d:%d:%d\n",s1.dob.date,s1.dob.month,s1.dob.year);
    return 0;
}