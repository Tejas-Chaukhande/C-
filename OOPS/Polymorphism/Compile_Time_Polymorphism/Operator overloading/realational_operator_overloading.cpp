#include<iostream>
using namespace std;
class Test
{
    private: int data;
    public: Test(int data)
            {
                this->data=data;
            }
            bool operator>(Test &t2)
            {
                if(this->data > t2.data)
                {
                    return true;
                }
                else{
                    return false;
                }

            }
};
int main()
{
    Test t1(40);
    Test t2(30);

    if(t1>t2)           //t1.operator>(t2)
    {
        cout<<"t1 is greater...!\n";
    }
    else{
        cout<<"t2 is greater...!\n";
    }
    return 0;
}