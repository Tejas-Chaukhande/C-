#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char name[30];
    float marks;
};
void input(struct student *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the roll: ");
        scanf("%d",&p[i].roll);
        printf("Enter the name: ");
        scanf(" %[^\n]",p[i].name);
        printf("Enter the marks: ");
        scanf("%f",&p[i].marks);
    }
}
void print(struct student *p, int n)
{
    printf("\n---------Student Information----------\n");
    for(int i=0;i<n;i++)
    {
        printf("Roll: %d\nName: %s\nMarks: %f\n",p[i].roll,p[i].name,p[i].marks);
    }
}

int main()
{
    int n;
    printf("Enter the no. of student: ");
    scanf("%d",&n);

    struct student *p=(struct student *)calloc(n,sizeof(struct student));   //Allocated memory Dyanamically
    if(p==NULL)
    {
        printf("Memory not allocated...!");
        return 0;
    }
    input(p,n);
    print(p,n);

    free(p);
    return 0;
}