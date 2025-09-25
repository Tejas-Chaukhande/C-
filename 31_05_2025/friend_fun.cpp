#include<iostream>
using namespace std;
class Sanket;
class Tejas
{
    private:string username;
    protected: string password;
    public: 
            Tejas(string user,string pass)
            {
                username=user;
                password=pass;
            }
            friend void Sanket::display(Tejas&);
};
class Sanket
{
    public: void display(Tejas &obj)
            {
                cout<<"Username: "<<obj.username<<endl;
                cout<<"Password: "<<obj.password<<endl;
            }
            Sanket();
};

int main()
{
    Tejas t("Tejas_chaukhande","Tejas#@123");
    Sanket s;
    s.display(t);
}