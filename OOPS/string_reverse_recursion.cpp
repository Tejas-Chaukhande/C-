// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void rev_str(string &str,int i,int j)
{
    if(i>=j)
    {
        return;
    }
    char c=str[i];str[i]=str[j];str[j]=c;
    
    rev_str(str,i+1,j-1);
}
int main() {
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    
    cout<<str<<endl;
    
    rev_str(str,0,str.length()-1);
    
    cout<<str;

    return 0;
}