#include<stdio.h>
void max_frequency_of_char(char *str)
{
    int max=0,cnt;
    char ch;
    for(int i=0;str[i]!='\0';i++)
    {
        cnt=0;
        // if (str[i] == ' ' || str[i] == '\n')
        //     continue;
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                cnt++;
            }
        }
        if(cnt>max)
        {
            max=cnt;
            ch=str[i];
        }
    }
    printf("The Highest frequency of character %c \nAppears number of times : %d ",ch,max);
}
int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    max_frequency_of_char(str);
}