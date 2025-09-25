#include<stdio.h>
void Toggle_Case_Sentence(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
}
int main()
{
    char str[30];
    printf("Enter the sentence: ");
    scanf("%s",str);

    Toggle_Case_Sentence(str);
    printf("%s",str);
    return 0;
}