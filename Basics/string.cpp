#include<iostream>
using namespace std;
int main()
{
    char name[20];     //C style string
    cout<<"ENter the name: ";
    cin>>name;
    cout<<name<<endl;

    string name1,name2;     //C++ style string
    cout<<"ENter the name1: ";
    cin>> name1;               //space consider as end of sting
    cout<<name1<<endl;
    name2=name1;
    cout<<"name2:"<<name2<<endl;

    if(name1==name2)
    {
        cout<<"name1 = name2";
    }
    else{
        cout<<"name1 != name2";
    }

}
