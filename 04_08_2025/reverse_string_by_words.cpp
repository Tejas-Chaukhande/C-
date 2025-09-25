#include<iostream>
#include<cstring>
using namespace std;
void Reverse(char *str,int i,int j)
{
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
    char *str=(char *)calloc(30,sizeof(char));
    cout<<"Enter the string: ";
    scanf("%[^\n]s",str);

    int len=strlen(str);
    Reverse(str,0,len-1);
    int k=0;
    for(int i=0;i<=len;i++)
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