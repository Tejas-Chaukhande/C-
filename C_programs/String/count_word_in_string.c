#include<stdio.h>
int count_words(char *str)
{
    int cnt=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' || str[i]=='\n')
        {
            cnt++;
        }
    }
    return cnt-1;
}
int main()
{
    char str[50];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    int words=count_words(str);
    printf("Words=%d\n",words);
    return 0;
}