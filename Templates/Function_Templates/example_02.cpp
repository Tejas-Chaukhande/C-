#include<iostream>
using namespace std;
template <typename T1, typename T2>   //will take two different type of data
double add(T1 a, T2 b)  //will take two different types of data but reult will return in double only
{
    return (a+b);
} 
int main()
{
    cout<< add<int,float> (10,23.4) <<endl;
    cout<< add<float,int> (3.6,7.8) <<endl;

}