#include<stdio.h>
int main()
{
    char str[12];
  INPUT:printf("Enter the number:");
        scanf("%s",str);
        int n=0;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]>=48 && str[i]<=57)         //0---48 .....9---57
            {
                n=n*10+str[i]-48;
            }
            else{
                printf("INVALID number...!\n");
                goto INPUT;
            }
        }
        printf("%d",n);
}