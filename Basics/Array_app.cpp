#include<iostream>
using namespace std;
class Array
{
    private: int *ptr,size;
    public: Array();
            Array(int *,int);
            Array(Array &);
            void Print();
            ~Array();
};
Array::Array(int *arr, int n)
{
    cout<<"In parameterised constructor: ";
    size=n;
    ptr=new int[size];

    for(int i=0;i<size;i++)
    {
        ptr[i]=arr[i];
    }
}
Array::Array()
{
    cout<<"In default constructor...!\n";
    cout<<"Enter the size of an array: ";
    cin>>size;
    ptr = new int[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter array element: ";
        cin>>ptr[i];
    }
}
void Array::Print()
{
    cout<<"Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}
Array::~Array()
{
    cout<<"In array destructor...!\n";
    delete []ptr;
}
Array::Array(Array &obj)
{
    cout<<"In copy constructor...!\n";
    size=obj.size;
    ptr=new int[size];
    for(int i=0;i<size;i++)
    {
        ptr[i]=obj.ptr[i];
    }
}
int main()
{
    Array obj1;       //default constructor
    obj1.Print();

    Array obj2=obj1;   //copy constructor
    obj2.Print();

    int *arr,n;
    cout<<"Enter the size for an parameterised array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter array element: ";
        cin>>arr[i];
    }
    Array obj3(arr,n);  //parameterised constructor
    obj3.Print();
    return 0;
}