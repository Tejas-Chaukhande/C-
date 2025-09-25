#include<iostream>
using namespace std;
int main()
{                                    //MSB                             LSB
    int x=1;   // it is 32 bits  ----> 00000000 00000000 00000000 00000001
    char *c=(char *)&x;    //from 4 bytes fetching the single byte

    if(*c)    //if *c contains 1 means, LSB byte going to lower address
    {
        cout<<"Little Endian...!"<<endl;
    }
    else      //if *c contains 0 means, MSB byte going to higher address
    {
        cout<<"Big Endian...!"<<endl;
    }
    return 0;
}