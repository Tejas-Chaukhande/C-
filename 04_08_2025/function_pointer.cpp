#include<iostream>
int add(int x, int y)
{
    return x+y;
}
int main()
{
    int a,b,s;
    std::cout<<"Enter the value for a: ";
    std::cin>>a;
    std::cout<<"Enter the value for b: ";
    std::cin>>b;

    int (*ptr)(int,int)=add;
    s=ptr(a,b);
    std::cout<<"sum: "<<s<<std::endl;
    return 0;    
}