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
    struct student *newnode=NULL;
    newnode=(struct student *)calloc(1,sizeof(struct student));
    newnode->name=(char *)calloc(30,sizeof(char));

    if(newnode==NULL)
    {
        printf("Newnode Not created...!\n");
        return NULL;
    }
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
        struct student *temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
    }
    return head;
}
void *Print(struct student *ptr)
{
    if(ptr==NULL)
    {
        printf("List is Empty...!\n");
        return NULL;
    }
    printf("\n-----------Student Information----------\n");
    while(ptr!=NULL)
    {
        printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
        ptr=ptr->link;
    }
    printf("------------------------------------------\n");
}
struct student *Delete_data(struct student *head)
{
    if(head==NULL)
    {
        printf("List is empty...!\n");
    }
    else
    {
        int roll;
        printf("Enter the ROll to delete the Node: ");
        scanf("%d",&roll); 

        struct student *temp=head;
        struct student *prev=NULL;

        while(temp!= NULL && roll != temp->roll)
        {
            prev=temp;
            temp=temp->link;
        }
        if(temp==NULL)
        {
            printf("Data Not found...!\n");
        }
        else if(head==temp)
        {
            head=temp->link;
            free(temp);
        }
        else
        {
            printf("Deleting the data: %d %s %f\n",temp->roll,temp->name,temp->marks);
            prev->link=temp->link;
            free(temp);
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
    A:    printf("A. Add_Last D. Delete_based_on_data P. Print E. Exit\n");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'A':head=Add_Last(head);
                        break;
            case 'D':head=Delete_data(head);
                        break;
            case 'P':Print(head);
                        break;
            case 'E':exit(0);
            default: printf("Invalid choice...!\n");
                    goto A;
        }
    }
}