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
    struct student *newnode=NULL, *temp=NULL;
    newnode=(struct student *)calloc(1,sizeof(struct student));
    newnode->name=(char *)calloc(20,sizeof(char));

    if(newnode==NULL)
    {
        printf("Node not created...!\n");
    }
    else{
        printf("Enter the roll: ");
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
        printf("\n-----------The list----------\n");
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
    struct student *temp=NULL,*prev=NULL;
    if(head==NULL)
    {
        printf("List is Empty...!\n");
    }
    else{
        temp=head;
        while(temp->link != NULL)
        {
            prev=temp;
            temp=temp->link;
            
        }
        free(temp);
        prev->link=NULL;
    }
    return head;
}
struct student *Delete_First(struct student *head)
{
    if(head==NULL)
    {
        printf("List is Empty....!\n");
    }
    else{
        struct student *temp=NULL;
        temp=head;
        head=temp->link;
        free(temp);
    }
    return head;
}
struct student *Add_First(struct student *head)
{
    struct student *newnode=NULL,*temp=NULL;
    newnode=(struct student *)calloc(1,sizeof(struct student));
    newnode->name=(char *)calloc(20,sizeof(char));

    if(newnode==NULL)
    {
        printf("Node not created...!\n");
    }
    else{
        printf("Enter the roll: ");
        scanf("%d",&newnode->roll);
        printf("ENter the name: ");
        scanf(" %[^\n]",newnode->name);
        printf("ENter the marks: ");
        scanf("%f",&newnode->marks);

        if(head==NULL)
        {
            head=newnode;
        }
        else{
            temp=head;
            head=newnode;
            newnode->link=temp;
        }
    }
    return head;

}
int main()
{
    struct student *head=NULL;
    char ch;
    while(1)
    {
        printf("A. Add_First a. Add_Last P. Print D. Delete_First d. Delete_Last E.exit\n");
        printf("Enter the choice: ");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'A':head=Add_First(head);
                        break;
            case 'a': head=Add_Last(head);
                        break;
            case 'P': Print(head);
                        break;
            case 'D':head=Delete_First(head);
                        break;
            case 'd':head=Delete_Last(head);
                        break;
            case 'E':exit(0);                        
        }
    }
}