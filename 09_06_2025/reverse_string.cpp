#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *str,int i,int j)
{
    if(i>=j)
    {
        return;
    }
    else
    {
        char ch=str[i];
        str[i]=str[j];
        str[j]=ch;
        reverse(str,i+1,j-1);
    }
}
int main()
{
    char str[10];
    cout<<"Enter the string: ";
    cin.getline(str,10);
    int len=strlen(str);
    reverse(str,0,len-1);
    cout<<str;
    return 0;
}