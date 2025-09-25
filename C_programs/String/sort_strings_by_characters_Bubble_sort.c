// //sort based on the length of the character
// #include<stdio.h>
// #include<string.h>
// void sort(char str[][20],int n)
// {
//     char temp[20];
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(strlen(str[i]) > strlen(str[j]))
//             {
//                 strcpy(temp,str[i]);
//                 strcpy(str[i],str[j]);
//                 strcpy(str[j],temp);
//             }
//         }
//     }

// }
// int main()
// {
//     char str[10][20];
//     int n;
//     printf("Enter the no. of string: ");
//     scanf("%d",&n);
//     getchar();

//     for(int i=0;i<n;i++)
//     {
//         printf("Enter the string: ");
//         scanf(" %[^\n]s",str[i]);
//     }
//     sort(str,n);

//     for(int i=0;i<n;i++)
//     {
//         printf("%s ",str[i]);
//     }
// }
#include<stdio.h>
#include<string.h>
void sort(char str[][30],int n)
{
    char temp[30];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)             //Bubble sort
        {
            if(strlen(str[j])>strlen(str[j+1]))   //According to length of string
            //if(strcmp(str[j],str[j+1])>0)        //accourding to the 
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
}
int main()
{
    char str[20][30];
    int n;
    printf("Enter the no. of strings: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the string %d :",i+1);
        scanf(" %[^\n]s",str[i]);
    }
    sort(str,n);

    printf("After sort A/C to lengh: ");
    for(int i=0;i<n;i++)
    {
        printf("%s ",str[i]);
    }
    return 0;
}