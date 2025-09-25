#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare_string(char *str1,char *str2)
{
    if(strlen(str1)!=strlen(str2))
    {
        return 1;
    }
    else
    {
        int cnt=0;
        for(int i=0;str1[i]!='\0';i++)
        {
            if(str1[i]==str2[i])
            {
                cnt++;
            }
        }
    
        if(cnt==strlen(str1))
        {
            return 0;
        }
    }
}
int main()
{
    char str1[50],str2[50];
    printf("Enter the str1: ");
    fgets(str1,sizeof(str1),stdin);
    //getchar();
    printf("Enter the value for str2: ");
    fgets(str2,sizeof(str2),stdin);

    char x=compare_string(str1,str2);

    if(x==0)
    {
        printf("Both are equal....!");
    }
    else{
        printf("BOth are Unequal....!");
    }

}