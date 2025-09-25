#include<iostream>
using namespace std;
class Marks
{
    private: int subject[3];
    public:
           Marks(int m1,int m2,int m3)
           {
            subject[0]=m1;
            subject[1]=m2;
            subject[2]=m3;
           }
           int operator [](int i)
           {
            return subject[i];
           }
};
int main()
{
    Marks s(70,80,90);
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s[2]<<endl;
    return 0;
}