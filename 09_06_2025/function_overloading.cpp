/*polymorphism: Single name having multiple forms, is called "polymorphism".
compile Time polymorphism: 
Function defination resolve at compile time is called "Static"/"Early"/"Compile Time" binding.
Ex..1)Function overloading, 2)operator overloading

1)Function overloading: Multiple function having same name, but difference in 1)no. of parameter 2)data type of parameters 3)Order of parameters (Signature)
2)Operator overloading: Improving the meaning of existing operator without changing their assosiativity and functionalities.

Run Time polymorphism:
Function defination resolve at run time is called "Dynamic"/"Late"/"Run Time" binding.
Ex..Function overriding.
1)Virtual function: The member function of parent class should be resolve by member function of child class, with same name , same signature but different implementation.
                       This process is called as "Function overriding".
*/
//Function overloading
#include<iostream>
using namespace std;
class Addition
{
    public: int Add(int x,int y)
            {
                return x+y;
            }
            double Add(double x,double y)
            {
                return x+y;
            }
};
int main()
{
    Addition obj1;
    int sum=obj1.Add(5,6);
    cout<<"sum: "<<sum<<endl;
    Addition obj2;
    double sum1=obj2.Add(4.5,6.7);
    cout<<"sum: "<<sum1<<endl;
    return 0;
}