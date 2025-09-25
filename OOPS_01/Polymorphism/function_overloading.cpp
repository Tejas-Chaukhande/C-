#include<iostream>
using namespace std;
class Addition
{
    public: int add(int x,int y)
            {
                return x+y;
            }
            float add(float x,float y)
            {
                return x+y;
            }
};
int main()
{
    Addition obj;
    cout<<obj.add(10,20)<<endl;
    cout<<obj.add(float(2.3),float(4.5))<<endl;
    return 0;
}