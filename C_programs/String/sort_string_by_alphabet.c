//sort based on alphabet (ASCII values)
#include<stdio.h>
void sort_by_alphabet(char *str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[i]>str[j])
            {
                char ch=str[i];
                str[i]=str[j];
                str[j]=ch;
            }
        }
    }
}
int main()
{
    char str[50];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    printf("Before sort: %s",str);
    sort_by_alphabet(str);
    printf("After sort: %s",str);
    return 0;
}