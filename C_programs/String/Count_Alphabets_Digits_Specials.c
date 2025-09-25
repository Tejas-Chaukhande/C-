#include<stdio.h>
void count_alphabet_digits_special(char *str)
{
    int alpha=0,digit=0,special=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            alpha++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            digit++;
        }
        else{
            special++;
        }
    }
    printf("Alphabets=%d\nDigits=%d\nSpecial=%d\n",alpha,digit,special);
}
int main()
{
    char str[50];
    printf("ENter the string: ");
    fgets(str,sizeof(str),stdin);

    count_alphabet_digits_special(str);
    return 0;
}