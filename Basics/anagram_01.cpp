//sort both string and compare, if both are same then its anagram
//time complexity ( O(n2))
#include<iostream>
using namespace std;
int is_anagram(string main,string sub)
{
    if(main.size() != sub.size())
    {
        return -1;
    }
    for(int i=0;main[i];i++)
    {
        for(int j=i+1;main[j];j++)
        {
            if(main[i]>main[j])
            {
                char ch=main[i];
                main[i]=main[j];
                main[j]=ch;
            }
        }
    }
    for(int i=0;sub[i];i++)
    {
        for(int j=i+1;sub[j];j++)
        {
            if(sub[i]>sub[j])
            {
                char ch=sub[i];
                sub[i]=sub[j];
                sub[j]=ch;
            }
        }
    }
    if(sub==main)
    {
        return 1;
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

    int x=is_anagram(main,sub);
    (x==-1 ? cout<<"Not an anagram":cout<<"Is anagram\n");

    return 0;
}