#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Chaukhande";
    printf("sizeof(str):%d\n",sizeof(str));  //count including NUll character
    printf("strlen(str):%d\n",strlen(str));  //Not including Null character
    printf("%s\n",str);

    printf("%s\n",str+2);

    str[5]='\0';
    printf("%s\n",str);
    printf("%s\n",str+4);
    printf("%s\n",str+5);
    printf("%s\n",str+6);
}