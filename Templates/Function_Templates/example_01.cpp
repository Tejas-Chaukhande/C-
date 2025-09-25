#include<iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    return (a+b);
}
int main()
{
    cout<< add<int>(5,10) <<endl;      //adding two integers
    cout<< add<float>(3.7,8.6)<<endl;  //adding two floats
    cout<< add<string>("Tejas","Patil")<<endl; //adding two string (concatenation)
    return 0;
}
