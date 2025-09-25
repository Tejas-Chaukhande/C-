#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char *name;         //struct member "name" is pointer, allocate memory dynamically
    float marks;
};
int main()
{
    struct student *S1=NULL;
    S1=(struct student *)calloc(1,sizeof(struct student));  //allocating size to the struct variable

    S1->name=(char *)calloc(20,sizeof(char *));      //allocating memory to the name, dynamically
                                                     //size = 4+8+4+20 =36 bytes
    printf("Enter the Roll: ");
    scanf("%d",&S1->roll);
    printf("Enter the name: ");
    scanf("%[^\n]",S1->name);
    printf("Enter the marks: ");
    scanf("%f",&S1->marks);

    printf("Roll: %d\nName: %s\nMarks: %f\n",S1->roll,S1->name,S1->marks);

    free(S1);
    return 0;

}