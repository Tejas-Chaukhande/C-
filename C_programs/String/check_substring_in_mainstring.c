#include<stdio.h>
#include<string.h>
int check_substr_in_mainstr(const char *str1, const char *str2)
{
    int cnt=0;
    int n=strlen(str2);
    // printf("len(str2): %d",n);
    for(int i=0,j=0;str1[i]!='\0';i++)
    {
        if(str1[i]==str2[j])
        {
            cnt++,j++;
        }
    }
    // printf("\ncnt:-%d",cnt);
    if(cnt==n)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    char str1[50],str2[30];
    printf("Enter the main string: ");
    //scanf("%[^\n]s",str1);
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the sub string: ");
    scanf("%[^\n]s",str2);

    int x=check_substr_in_mainstr(str1,str2);

    if(x==1)
    {
        printf("Found....!");
    }
    else{
        printf("Not Found...!");
    }
        
}