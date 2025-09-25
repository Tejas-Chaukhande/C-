/*
friendFunction() can access private/protected members of base class.
A friend function can be declared in any section of the class i.e. public or private or protected.

1. Normal function, but in declaration use "friend" keyword.
2. Hence, not this pointer will there.
3. Defination also be normal.
4. Calling also will like normal function, but will passed as 'object' of Class.
*/
#include<iostream>
using namespace std;
class Base
{
    private: string username;
    protected:string password;
             
    public: 
           Base(string user,string pass)
           {
            username=user;
            password=pass;
           }
           friend void friendFunction(Base &);   //friend function declaration (normal function)
};
void friendFunction(Base &C)
{
    cout<<"Username: "<<C.username<<endl;
    cout<<"Password: "<<C.password<<endl;
}
int main()
{
    Base obj("tejas_chukhande2001","Tejas@#123");
    friendFunction(obj);
    return 0;
}