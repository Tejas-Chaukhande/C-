#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    float marks;
    char *name;
};
int main()
{
    int n;
    printf("Enter the number of student: ");
    scanf("%d",&n);

    struct student *ptr[n];   //array of structure pointer
    

    for(int i=0;i<n;i++)
    {
        ptr[i]=(struct student*)calloc(1,sizeof(struct student));
        ptr[i]->name=(char *)calloc(20,sizeof(char));

    }
    for(int i=0;i<n;i++)
    {
        printf("Enter the name, roll & marks: ");
        scanf("%s %d %f",ptr[i]->name,&ptr[i]->roll,&ptr[i]->marks);
    }
    for(int i=0;i<n;i++)
    {
        printf("====Student Info %d====\n",i+1);
        printf("name: %s\nRoll: %d\nMakrs: %f\n",ptr[i]->name,ptr[i]->roll,ptr[i]->marks);
    }
    return 0;
}