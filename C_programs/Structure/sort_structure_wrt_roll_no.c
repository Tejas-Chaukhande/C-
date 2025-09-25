#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    float marks;
};
void input(struct student *s, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the roll: ");
        scanf("%d",&s[i].roll);
        printf("Enter the name: ");
        scanf(" %[^\n]",s[i].name);
        printf("Enter the marks: ");
        scanf("%f",&s[i].marks);
    }

}
void print(struct student *s,int n)
{
    printf("\n--------------Student Information---------------\n");
    for(int i=0;i<n;i++)
    {
        printf("Roll: %d\nName: %s\nMarks: %f\n",s[i].roll,s[i].name,s[i].marks);
    }
}
void sort(struct student *s,int n)
{
    struct student temp;
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(s[i].roll > s[j].roll)
    //         {
    //             temp=s[i];
    //             s[i]=s[j];
    //             s[j]=temp;
    //         }
    //     }
    //}
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j].roll > s[j+1].roll)        //Bubble sort method
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the no. of student: ");
    scanf("%d",&n); 

    struct student s[n];
    input(s,n);
    print(s,n);
    sort(s,n);
    print(s,n);
    return 0;
}