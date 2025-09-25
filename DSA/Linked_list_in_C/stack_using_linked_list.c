#include<stdio.h>
#include<stdlib.h>
int cnt=0;
struct student
{
    int roll;
    struct student *link;
};
struct student* Add_first(struct student *head)
{
    struct student *newnode=NULL;
    newnode=(struct student*)calloc(1,sizeof(struct student));

    if(newnode==NULL)
    {
        printf("Node not created...!\n");
        return head;
    }
    printf("Enter the roll: ");
    scanf("%d",&newnode->roll);
    if(head==NULL)
    {
        newnode->link=head;
        head=newnode;
    }
    else{
        newnode->link=head;
        head=newnode;
    }
    cnt++;
    return head;

}
struct student* Delete_first(struct student *head)
{
    if( cnt==0)
    {
        printf("\n--------------------------\n");
        printf("List is empty...!\n");
        printf("--------------------------\n");
    }
    else{
        if(head->link == NULL)
        {
            free(head);
            head=NULL;
        }
        else{
            struct student *temp=head;
            head=temp->link;
            free(temp);
            temp=NULL;
        }
        cnt--;
    }
    return head;
}
void Print(struct student *ptr)
{
    if(ptr==NULL)
    {
        printf("\n--------------------------\n");
        printf("List is empty...!\n");
        printf("--------------------------\n");
    }
    else{
        printf("\n--------------------------\n");
        printf("List elements are: \n");
        while(ptr)
        {
            printf("%d--->",ptr->roll);
            ptr=ptr->link;
        }
        printf("NULL\n");
        printf("--------------------------\n");
    }
}
int main()
{
    struct student *head=NULL;
    do
    {
        char ch;
        printf("A. Add_first\nD. Delete_first\nP. Print\nE. Exit\n");
        printf("Enter the choice: ");
        scanf(" %ch",&ch);
        switch(ch)
        {
            case 'A':head=Add_first(head);
                     break;
            case 'D':head=Delete_first(head);
                     break;
            case 'P':Print(head);
                     break;
            case 'E':exit(0);
            default:printf("Invalid choice...!\n");
                    break;
        }
    } while (1);
    return 0;
}