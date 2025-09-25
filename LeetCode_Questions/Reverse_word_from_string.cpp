#include<iostream>
using namespace std;
void Reverse(string &str,int i,int j)
{
    cout<<"length of string: "<<j<<endl;
    while(i<j)
    {
        char ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        i++,j--;
    }
}
int main()
{
    string str;
    cout<<"Enter the string: ";
   // cin>>str;
    getline(cin,str);
    Reverse(str,0,str.length()-1);
    int k=0;
    for(int i=0;i<=str.length();i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            Reverse(str,k,i-1);
            k=i+1;
        }
    }
    cout<<str;
    return 0;
}