#include<iostream>
using namespace std;
int my_strstr(string main,string sub)
{
    int i=0,j=0;
    while(main[i] != '\0')
    {
        if(main[i]==sub[j])
        {
            j++;
        }
       i++;
        if(j==sub.size())
        {
            return i-j;
        } 
    }
    return -1;
}
int main()
{
    string main,sub;
    cout<<"Enter the main string: ";
    getline(cin,main);
    cout<<"Enter the sub string: ";
    getline(cin,sub);

    int x=my_strstr(main,sub);
    (x==-1? cout<<"sub string not found in main\n" : cout<<"substring found at: "<<x<<endl);

    return 0;
}