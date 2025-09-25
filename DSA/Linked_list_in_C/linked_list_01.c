#include<stdio.h>
#include<stdlib.h>
int cnt=0;
struct student
{
    int roll;
    char *name;
    struct student *link;   //self referencial structure
};
struct student *Add_last(struct student *head)
{
    struct student *newnode=NULL;
    newnode=(struct student*)calloc(1,sizeof(struct student));
    newnode->name=(char *)calloc(20,sizeof(char));
    if(newnode==NULL)
    {
        printf("Node not created....!\n");
        return head;
    }
    printf("Enter the roll: ");
    scanf("%d",&newnode->roll);
    printf("Enter the name: ");
    scanf("%s",newnode->name);
    if(head==NULL)
    {
        newnode->link=head;
        head=newnode;
    }
    else{
        struct student *temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
    }
    cnt++;
    return head;

}
void Print(struct student *ptr)
{
    if(cnt==0)
    {
        printf("List is empty....!\n");
    }
    else{
        while(ptr)
        {
            printf("%d %s \n",ptr->roll,ptr->name);
            ptr=ptr->link;
        }
    }
}
int main()
{
    struct student *head=NULL;
    char ch;
    while(1)
    {
        printf("A. Add at last\nP. Print\nE. Exit\n");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'A':head=Add_last(head);
                     break;
            case 'P':Print(head);
                     break;
            case 'E':exit(0);
            default:printf("Invalid Choice...!\n");
        }
    }
}