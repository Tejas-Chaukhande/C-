#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int roll;
    char *name;
    float marks;
    struct Student *link;
};
struct Student *Add_last(struct Student *head)
{
    struct Student *newnode=NULL;
    newnode=(struct Student *)calloc(1,sizeof(struct Student));
    newnode->name=(char *)calloc(20,sizeof(char));
    if(newnode==NULL)
    {
        printf("Newnode not created...!\n");
        return head;
    }
    printf("ENter the roll: ");
    scanf("%d",&newnode->roll);
    printf("Enter the name: ");
    scanf(" %[^\n]s",newnode->name);
    printf("Enter the marks: ");
    scanf("%f",&newnode->marks);
    if(head==NULL)
    {
        newnode->link=head;
        head=newnode;
    }
    else{
        struct Student *temp=head;
        while(temp->link != NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
    }
    return head;

}
void Print(struct Student *ptr)
{
    if(ptr==NULL)
    {
        printf("List is empty...!\n");
    }
    else{
        while(ptr!=NULL)
        {
            printf("%s %d %f\n",ptr->name,ptr->roll,ptr->marks);
            ptr=ptr->link;
        }

    }

}
int main()
{
    struct Student *head=NULL;
    char ch;
    while(1)
    {
      input:  printf("A. Add at last P. Print E.Exit\n");
        printf("Enter the choice: ");
        scanf(" %c",&ch);
        switch(ch)
        {
            case'A':head=Add_last(head);
                    break;
            case'P':Print(head);
                    break;
            case'E':exit(0);
            default:printf("Invalid choice\n");
                    goto input;
        }
    }
    return 0;
}