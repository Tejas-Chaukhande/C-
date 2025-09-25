/*Bit fields: It is a method where we can allocate memory for structure members in the form of bits.*/
#include<stdio.h>
#include<string.h>
struct one
{
    unsigned int num:3;   //It will allocate 3 bits to the num   max="1 1 1" min="0 0 0"
    char name[20];
};
int main()
{
    struct one v1;
    v1.num=7;
    strcpy(v1.name,"Tejas");

    printf("num: %d\nname: %s\n",v1.num,v1.name);
    return 0;
}