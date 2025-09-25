/*Structure: 
Collection of different types of data, for each structure member get individual memory. Size of the structure is
sum of all the members of structure. All structure elements can access at a time.

Union: 
Collection of different types of data, all members share the common memory. Size of the union is the size 
greatest member function. Only one member can access at a time.*/
#include<stdio.h>
struct mystruct
{
    int i;
    float f;
    char ch;
};
union myunion
{
    int i;
    float f;
    char ch;
};
int main()
{
    struct mystruct s={10,3.14,'A'};
    union myunion u;
    printf("sizeof structure: %lu\n",sizeof(s));//addition of size of all structure member 
    printf("sizeof Union: %lu\n",sizeof(u));   //largest member size, as all members share the common memory
    printf("=====Members of structure=====\n");
    printf("%d %.2f %c\n",s.i,s.f,s.ch);     //all structure values can access at a time
    printf("====Members of Union=====\n");
    u.i=20;
    printf("%d ",u.i);      //only one value can be access at a time.
    u.f=5.8;
    printf("%f ",u.f);
    u.ch='Z';
    printf("%c\n",u.ch);
    return 0;
}