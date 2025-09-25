#include<stdio.h>
#include<string.h>
union gender
{
    char gen[10];
};
struct Student
{
    int roll;
    char name[10];
    float marks;
    union gender g;
};
int main()
{
    struct Student st={53,"Tejas",87};
    strcpy(st.g.gen,"Male");

    printf("=====Student info=====\n");
    printf("name: %s roll: %d marks: %f gender: %s\n",st.name,st.roll,st.marks,st.g.gen);

    printf("Sizeof Student: %lu\n",sizeof(st));


}