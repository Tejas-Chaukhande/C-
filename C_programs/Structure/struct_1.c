#include<stdio.h>
struct one
{
    int i;           //memory not allocated here, until and unless structure variable not created.
    char ch;
    float f;
};
int main()
{
    struct one v;   //v is the variable of structure type  (9 bytes)     
    v.i=10;         //assiging the values to the structure members
    v.ch='A';
    v.f=3.14;

    printf("%d %c %f\n",v.i,v.ch,v.f);


    //struct one o;  //o is the another structure varible
    struct one o={20,'B',9.87};     //while initialising the values, order is must
    printf("%d %c %f\n",o.i,o.ch,o.f);

    return 0;
}
