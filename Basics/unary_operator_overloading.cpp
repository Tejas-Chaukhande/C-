//prefix increment
#include<iostream>
using namespace std;
class Increment
{
    private: int num;
    public: Increment()
            {
                cout<<"Enter the value for num: ";
                cin>>num;
            }
            void showdata()
            {
                cout<<"After Increment: "<<num<<endl;
            }
            void operator ++()
            {
                ++num;    //Incrementing by 1
            }
            Increment operator ++(int)
            {
                Increment temp=*this;   //save current state, this pointer holding the addr of calling object
                num++;                  //increment
                return temp;            //return old state
            }
        
};
int main()
{
    Increment obj1;
    ++obj1;
    obj1.showdata();        //Pre increment
    Increment obj2;
    Increment temp= obj2++;
    temp.showdata();        //Post increment, 1st value print then increase in memory
    obj2.showdata();    

    return 0;
}