/*same declaration of the function in all the class. What ever the class defining later,that should be
declare as forward.*/
#include<iostream>
using namespace std;
class Test2;   //forward declaration of "Test2"
class Test1
{
    private:int x;
    public: Test1(int x)
            {
                this->x=x;
            }
            friend int Greater(Test1 &, Test2 &); //in Test1 class using reference Test2 object 
                                                 //but Test2 not defined yet,hence forward declaration must.
};
class Test2
{
    private:int y;
    public:Test2(int y)
           {
            this->y=y;
           }
           friend int Greater(Test1 &, Test2 &);  
};
int Greater(Test1 &t1, Test2 &t2)
{
    if(t1.x > t2.y)
    {
        return t1.x;
    }
    return t2.y;
}
int main()
{
    Test1 obj1(10);
    Test2 obj2(20);
    int max=Greater(obj1,obj2);
    cout<<"Max: "<<max<<endl;
    return 0;
}