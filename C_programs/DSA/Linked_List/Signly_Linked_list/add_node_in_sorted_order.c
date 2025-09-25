#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    struct student *link;
};
struct student *Add_Sorted(struct student *head)
{
    struct student *newnode=NULL;
    newnode=(struct student *)calloc(1,sizeof(struct student));

    if(newnode==NULL)
    {
        printf("Node not created...!\n");
    }
    else{
        printf("Enter the roll: ");
        scanf(" %d",&newnode->roll);
        
        if(head==NULL || newnode->roll < head->roll)
        {
            newnode->link=head;
            head=newnode;
        }
        else{
            struct student *temp=head, *prev=NULL;
            while(temp!= NULL && newnode->roll > temp->roll)
            {
                prev=temp;
                temp=temp->link;
            }
            prev->link=newnode;
            newnode->link=temp;
        }
    }
    return head;
}
void Print(struct student *ptr)
{
    if(ptr==NULL)
    {
        printf("List is Empty...!\n");
    }
    else
    {
        printf("Students Roll in sorted order:\n");
        while(ptr!=NULL)
        {
            printf("%d->",ptr->roll);
            ptr=ptr->link;
        }
        printf("\n--------------------------\n");
    }

}
int main()
{
    struct student *head=NULL;
    char ch;
    while(1)
    {   
        printf("A. Add_sorted P. Print E. Exit\n");
        printf("Enter the choice: ");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'A': head=Add_Sorted(head);
                        break;
            case 'P': Print(head);
                        break;
            case 'E': exit(0);
        }
    }
}