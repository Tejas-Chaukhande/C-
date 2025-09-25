#include<stdio.h>
struct student
{
    int roll;
    float marks;
    char name[20];
};
void Print(int r,float m,char *name)
{
    printf("roll: %d marks: %0.2f name: %s\n",r,m,name);
}
void Print1(struct student s)
{
    printf("roll: %d marks: %0.2f name: %s\n",s.roll,s.marks,s.name);
}
int main()
{
    struct student s1={53,87,"Tejas"};
    Print(s1.roll,s1.marks,s1.name);  //passing each structure member by member
    Print1(s1);
}