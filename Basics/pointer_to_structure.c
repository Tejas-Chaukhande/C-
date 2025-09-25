#include<stdio.h>
struct student
{
    int roll;
    char name[20];
};
int main()
{
    struct student e1;
    printf("Enter the roll: ");
    scanf("%d",&e1.roll);
    printf("Enter the name: ");
    scanf("%s",e1.name);

    struct student *ptr=&e1;   //ptr pointer pointing to structure

    printf("roll: %d\nname: %s\n",ptr->roll,ptr->name);//if pointer pointing to any user-defined data type
                                                    //then for accessing the stucture member use -> operator
    return 0;
}