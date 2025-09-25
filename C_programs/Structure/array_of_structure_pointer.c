#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;           //4 byte
    char *name;         //8 bytes
    float marks;        //4 bytes
};
int main()
{
    int n;
    printf("Enter the no.of students: ");
    scanf("%d",&n);

    struct student *p[n];    //P is an array of 5 structure pointer

    for(int i=0;i<n;i++)
    {
        p[i]=(struct student *)calloc(1,sizeof(struct student));    //n times request for 28 bytes
        p[i]->name=(char *)calloc(20,sizeof(char));      //name pointer in structure members
    }

    for(int i=0;i<n;i++)
    {
        printf("ENter the roll: ");
        scanf("%d",&p[i]->roll);
        printf("ENter the name: ");
        scanf(" %[^\n]",p[i]->name);
        printf("Enter the marks: ");
        scanf("%f",&p[i]->marks);
    }
    printf("---------Students Info--------\n");
    for(int i=0;i<n;i++)
    {
        printf("%d %s %f\n",p[i]->roll,p[i]->name,p[i]->marks);
    }
    printf("\n");
    return 0;
}