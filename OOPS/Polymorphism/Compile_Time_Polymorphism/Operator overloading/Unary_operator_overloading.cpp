#include<iostream>
using namespace std;
class Increase
{
    private: int num;
    public:void getdata()
           {
            cout<<"Enter the num: ";
            cin>>num;
           }
           void operator ++()
           {
             ++num;
           }
           void Print()
           {
            cout<<"Num: "<<num<<endl;
           }
           Increase operator ++(int)
           {
                Increase temp=*this;   //storing current address on num
                num++;                 //incrementing num by 1
                return temp;           //returning previous address
           }
};
int main()
{
    Increase obj1,obj2,temp;
    obj1.getdata();
    ++obj1;         //Pre increment
    obj1.Print();

    obj2.getdata();
    temp=obj2++;   //temp.operator(obj2) //Post increament
    temp.Print();
    obj2.Print();
}