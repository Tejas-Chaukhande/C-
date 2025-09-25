#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll;
    char *name;
    float marks;
    struct student *link;
};
struct student *Add_Last(struct student *head)
{
    struct student *newnode=NULL,*temp=NULL;

    newnode=(struct student *)calloc(1,sizeof(struct student));
    newnode->name=(char *)calloc(20,sizeof(char));

    if(newnode==NULL)
    {
        printf("Node not created...!\n");
    }
    else{
        printf("Enter the Roll: ");
        scanf("%d",&newnode->roll);
        printf("Enter the name: ");
        scanf(" %[^\n]",newnode->name);
        printf("Enter the marks: ");
        scanf("%f",&newnode->marks);

        if(head==NULL)
        {
            head=newnode;
        }
        else{
            temp=head;
            while(temp->link != NULL)
            {
                temp=temp->link;
            }
            temp->link=newnode;
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
    else{
        printf("\n------student Information------\n");
        while(ptr != NULL)
        {
            printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
            ptr=ptr->link;
        }
        printf("---------------------------------\n");
    }
}
struct student *Delete_Last(struct student *head)
{
    if(head==NULL)
    {
        printf("List is empty...!\n");
        return NULL;
    }
    else{
        
        if(head->link==NULL)
        {
            free(head);
            return NULL;
        }
        struct student *temp=head;
        struct student *prev=NULL;
        while(temp->link !=NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        prev->link=NULL;
        free(temp);
    
    }
    return head;
}
int main()
{
    struct student *head=NULL;
    char ch;
    while(1)
    {
        printf("A. Add Last D. Delete Last P. Print E. Exit\n");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'A': head=Add_Last(head);
                        break;
            case 'D': head=Delete_Last(head);
                        break;
            case 'P':Print(head);
                        break;
            case 'E': exit(0);
        }
    }
}