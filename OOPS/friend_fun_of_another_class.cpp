#include<iostream>
using namespace std;
//class Sanket;       //if we declare Sanket as forward declaration, then compiler only know
class Tejas;          //there will be one class "Sanket" somewhere in the program but don't know
class Sanket          //the defination of "Sanket", define "Sanket" 1st then "Tejas"
{
    public: void showdata(Tejas &);
};
class Tejas
{
    private: string username;
    protected: string password;
    public: Tejas(string user,string pass)
            {
                username=user;
                password=pass;
            }
            friend void Sanket::showdata(Tejas &);
};

void Sanket::showdata(Tejas &c)
{
    cout<<"Username: "<<c.username<<endl;
    cout<<"Password: "<<c.password<<endl;
}
int main()
{
    Tejas t("tejas_chau","Tejas@123");
    Sanket s;
    s.showdata(t);
    return 0;
}