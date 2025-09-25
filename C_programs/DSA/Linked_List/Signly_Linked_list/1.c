#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int roll;
    float marks;
    struct student *link; //link or next
}STU;
STU *Add(STU *head)
{
    STU *newnode=NULL,*temp=NULL;

    newnode=calloc(1,sizeof(STU));
    if(newnode==NULL)
    {
        printf("Node not created\n");
    }
    else{
        printf("Enter the ROll: ");
        scanf("%d",&newnode->roll);
        printf("Enter the marks: ");
        scanf("%f",&newnode->marks);

        if(head==NULL)
        {
            head=newnode;
        }
        else{
            temp=head;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            temp->link=newnode;
        }
    }
    return head;
}
void Print(STU *ptr)
{
    if(ptr==NULL)
    {
        printf("List is empty\n");
    }
    else{
        while(ptr)
        {
            printf("%d %f\n",ptr->roll,ptr->marks);
            ptr=ptr->link;
        }
    }
}
int main()
{
    STU *head=NULL;
    char ch;
    while(1)
    {
        printf("A. Add P. Print E. Exit\n");
        printf("Enter the choice:");
        scanf(" %c",&ch);

        switch(ch)
        {
            case 'A':head=Add(head);
                     break;
            case 'P':Print(head);
                    break;
        }
    }
}