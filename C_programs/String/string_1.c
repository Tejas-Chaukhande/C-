#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]={'h','e','l','o'};
    char b[20]="Hello";
    printf("%s\n",a);
    printf("sizeof(a):%d\n",sizeof(a));
    printf("strlen(a): %d\n",strlen(a));
    printf("%s\n",b);
    printf("sizeof(b):%d\n",sizeof(b));
    printf("strlen(b): %d\n",strlen(b));


}