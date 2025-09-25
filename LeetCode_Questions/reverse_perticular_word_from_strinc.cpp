#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int Reverse_word(char *str, const char *word)
{
    char *p=strstr(str,word);
    if(p!=NULL)
    {
        int len=strlen(word);
        char *start = p;
        char *end = p+len-1;
        while(start<end)
        {
            char ch=*start;
            *start=*end;
            *end=ch;
            start++,end--;
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char *str=(char *)calloc(50,sizeof(char));
    char *word=(char *)calloc(20,sizeof(char));
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    printf("Enter the word: ");
    scanf("%s",word);
    int x=Reverse_word(str,word);
    if(x==1)
    {
        printf("Result:\n%s",str);
    }
    else
    {
        printf("%s not found in %s",word,str);
    }
    return 0;
}