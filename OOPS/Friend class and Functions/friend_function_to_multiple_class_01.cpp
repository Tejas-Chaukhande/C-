/*friend function to the multiple class, hence forward declaration is must here.
Here we are accessing the private members of 3 different class using the friend function*/
#include<iostream>
using namespace std;
class Test2;
class Test3;
class Test1
{
    private: int x;
    public: Test1(int x1)
            {
                x=x1;
            };
            friend int Maximum(Test1 &,Test2 &,Test3 &);
            friend int Minimum(Test1 &,Test2 &,Test3 &);

};
class Test2
{
    private:int y;
    public: Test2(int y1)
            {
                y=y1;
            };
            friend int Maximum(Test1 &,Test2 &,Test3 &);
            friend int Minimum(Test1 &,Test2 &,Test3 &);

};
class Test3
{
    private:int z;
    public:Test3(int z1)
           {
            z=z1;
           }
           friend int Maximum(Test1 &,Test2 &,Test3 &);
           friend int Minimum(Test1 &,Test2 &,Test3 &);
};
int Maximum(Test1 &t1,Test2 &t2,Test3 &t3)
{
    if(t1.x>t2.y && t1.x>t3.z)
    return t1.x;
    else if(t2.y>t3.z && t2.y>t1.x)
    return t2.y;
    else
    return t3.z;

}
int Minimum(Test1 &t1,Test2 &t2, Test3 &t3)
{
    if(t1.x<t2.y && t1.x<t3.z)
    return t1.x;
    else if(t2.y<t1.x && t2.y<t3.z)
    return t2.y;
    else
    return t3.z;
}
int main()
{
    Test1 obj1(20);
    Test2 obj2(30);
    Test3 obj3(10);
    int min,max;
    min=Minimum(obj1,obj2,obj3);
    max=Maximum(obj1,obj2,obj3);

    cout<<"Max: "<<max<<endl;
    cout<<"Min: "<<min<<endl;
    return 0;
}
