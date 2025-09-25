//calculate the sum of ascii value of both string and compare
//time complexity is O(n)
#include<iostream>
using namespace std;
int main()
{
    int t; //for test case
    cout<<"Enter the test case no.: ";
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cout<<"Enter the string1: ";
        cin>>s1;
        cout<<"Enter the string2: " ;
        cin>>s2;

        int sum1,sum2;
        sum1=sum2=0;
//sum of all the characters in string1
        for(int i=0;s1[i] != '\0'; i++)
            sum1=sum1+ int(s1[i]);      //s1[i]=a--->int(s1[i])=97
//sum of all the characters in string 2
        for(int i=0;s2[i] != '\0';i++)
            sum2=sum2+ int(s2[i]);
        
        cout<<sum1<<" "<<sum2<<endl;
        
        if(sum1 == sum2)    //if both sum equal means its anagram
            cout<<"Anagram...\n";
        else
            cout<<"Not an Anagram...\n";

    }
}