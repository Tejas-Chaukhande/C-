#include<stdio.h>
#include<stdlib.h>
int cnt=0;
struct student
{
    int roll;
    struct student *link; //self referencial structure (one of the member of structure pointing to the same structure)
};
struct student* push(struct student *head)  //this function will return the address hence return * 
{
    struct student *newnode=NULL;
    newnode=(struct student *)calloc(1,sizeof(struct student));
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
    else
    {
        newnode->link=head;
        head=newnode;
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
        printf("====Student info====\n");
        printf("Head ---> ");
        while(ptr)
        {
            printf("%d ---> ",ptr->roll);
            ptr=ptr->link;
        }
        printf("NULL");
        printf("\n---------------------\n");
    }
}
struct student* Delete_last(struct student *head)
{
    if(cnt==0)
    {
        printf("List is empty...!\n");
        return head;
    }
    if(head->link==NULL)
    {
        free(head);
        head=NULL;
        cnt--;
    }
    else
    {
        struct student *temp=NULL,*prev=NULL;
        temp=head;
        while(temp->link!=NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        free(temp);
        prev->link=NULL;
        cnt--;
    }
    return head;
}
struct student* pop(struct student *head)
{
    if(cnt==0)
    {
        printf("List is Empty...!\n");
    }
    else
    {
        if(head->link==NULL)
        {
            free(head);
            head=NULL;
        }
        else{
            struct student *temp=head;
            head=temp->link;
            free(temp);
        }
    }
    cnt--;
    return head;
}
void peek(struct student *head)
{
    if(cnt==0)
    {
        printf("List is empty...!\n");
    }
    else{
        printf("peek is: %d\n",head->roll);
    }
}
struct student* Reverse(struct student *head)
{
    if(head==NULL)
    {
        printf("List is empty...!\n");
        return head;
    }
    struct student *temp=head;
    struct student *prev=NULL;
    struct student *next=NULL;
    while(temp!=NULL)
    {
        next=temp->link;
        temp->link=prev;
        prev=temp;
        temp=next;
    }
    return prev;
}
int main()
{
    struct student *head=NULL;
    while(1)
    {
        int n;
        printf("1. Push\n2. Pop\n3. peek\n4. Print\n5. Reverse\n6. Exit\n");
        printf("Enter the choice: ");
        scanf(" %d",&n);
        switch(n)
        {
            case 1:head=push(head);  //Add first
                     break;
            //case 'D':head=Delete_last(head);
             //        break;
            case 2:head=pop(head);
                      break;
            case 3:peek(head);
                   break;
            case 4:Print(head);
                     break;
            case 5:head=Reverse(head);
                   break;
            case 6:exit(0);
            default:printf("Invalid choice......!\n");
        }

    }
}