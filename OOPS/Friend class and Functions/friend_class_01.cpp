/*
A "friend class" can access the private and protected members of other classes in which it is declared as friend.
Friendship is not mutual. If class A is a friend of B, then B doesn't become a friend of A automatically.
*/
#include<iostream>
using namespace std;
class Tejas
{
    private: string username;
    protected:string password;
    public:Tejas(string username,string password)
           {
            this->username=username;
            this->password=password;
           }
           friend class Sanket;     //Sanket is a friend class of Tejas but Tejas is not friend class of Sanket
};
class Sanket
{
    public:
          void display(Tejas &C)
          {
            cout<<"Sanket displaying the Private and Protected info of Tejas"<<endl;
            cout<<"Username: "<<C.username<<endl;
            cout<<"Password: "<<C.password<<endl;

          }
};
int main()
{
    Tejas t("tejas_chaukhande@123","Tejas@#123");
    Sanket s;
    s.display(t);
    return 0;
}