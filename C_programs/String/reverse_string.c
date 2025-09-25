#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    int len=strlen(str);
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        char x=str[i];
        str[i]=str[j];
        str[j]=x;
    }
    str[len]='\0';

}
int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    reverse(str);
    printf("%s\n",str);
    return 0;

}