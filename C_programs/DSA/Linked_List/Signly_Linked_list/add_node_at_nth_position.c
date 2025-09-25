/*Input: 3->5->8->10, data = 2, pos = 2
Output: 3->2->5->8->10


Input: 3->5->8->10, data = 11, pos = 5
Output: 3->5->8->10->11 */
#include<stdio.h>
#include<stdlib.h>
int cnt=0;
struct data
{
    int roll;
    struct data *link;
};
struct data *Add_last(struct data *head)
{
    struct data *newnode=(struct data *)calloc(1,sizeof(struct data));

    if(newnode==NULL)
    {
        printf("Node not created...!\n");
        return head;
    }
    printf("Enter the roll: ");
    scanf("%d",&newnode->roll);

    if(head==NULL)
    {
        head=newnode;
    }
    else{
        struct data *temp=head;
        while(temp->link != NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
    }
    cnt++;
    return head;
}
void Print(struct data *ptr)
{
    if(ptr==NULL)
    {
        printf("List is Empty...!\n");
    }
    else{
        printf("------No. of students:-%d-------\n",cnt);
        while(ptr!=NULL)
        {
            printf("%d->",ptr->roll);
            ptr=ptr->link;
        }
        printf("NULL");
        printf("\n---------------------\n");
    }
}
struct data *Add_nth_position(struct data *head)
{
    int n;
    printf("Enter the position to add NODE: ");
    scanf("%d",&n);
    if(n<1 || n>cnt+1)
    {
        printf("Invalid Position...!\n");
        return head;
    }

    struct data *newnode=(struct data*)calloc(1,sizeof(struct data));
    if(newnode==NULL)
    {
        printf("Node not created...!\n");
        return head;
    }
    printf("Enter the roll: ");
    scanf("%d",&newnode->roll);

    if(n==1)
    {
        newnode->link=head;
        head=newnode;
        return head;
    }
    struct data *temp=head;
    for(int i=1;i<n-1;i++)
    {
        temp=temp->link;
    }
    newnode->link=temp->link;
    temp->link=newnode;
    cnt++;
    return head;
}
// struct data *Add_nth_position(struct data *head)
// {
//     int n;
//     printf("Enter the position to add NODE: ");
//     scanf("%d", &n);

//     if (n < 1 || n > cnt + 1)
//     {
//         printf("Invalid Position...!\n");
//         return head;
//     }

//     struct data *newnode = (struct data *)calloc(1, sizeof(struct data));
//     if (newnode == NULL)
//     {
//         printf("Node not created...!\n");
//         return head;
//     }

//     printf("Enter the roll: ");
//     scanf("%d", &newnode->roll);

//     // Inserting at the beginning
//     if (n == 1)
//     {
//         newnode->link = head;
//         head = newnode;
//         cnt++;
//         return head;  // ✅ Return immediately to prevent running rest of the code
//     }

//     // Inserting at nth position
//     struct data *temp = head;
//     for (int i = 1; i < n - 1; i++)
//     {
//         temp = temp->link;
//     }

//     newnode->link = temp->link;
//     temp->link = newnode;

//     cnt++;
//     return head;
// }

int main()
{
    struct data *head=NULL;
    char ch;
    while(1)
    {
    Input: printf("A. Add at last N. Add at nth position P. Print E. Exit\n");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'A':head=Add_last(head);
                        break;
            case 'N':head=Add_nth_position(head);
                        break;
            case 'P':Print(head);
                        break;
            case 'E':exit(0);
            default:printf("Invalid Choice....!!!\n");
                    goto Input;
        }
    }
}