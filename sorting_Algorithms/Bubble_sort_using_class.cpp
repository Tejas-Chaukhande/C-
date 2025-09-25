#include<iostream>
using namespace std;
class Bubble
{
    private: int *arr;
             int size;
    public: Bubble(int *arr,int size)
            {
                this->size = size;
                this->arr = new int[size];    //allocate new array
                for(int i=0;i<size;i++)       // copy input array
                {
                    this->arr[i] = arr[i];
                }
            }
            void Bubble_sort()
            {
                for(int i=0;i<size-1;i++)
                {
                    bool swapped = false;
                    for(int j=0;j<size-(i+1);j++)
                    {
                        if(arr[j]>arr[j+1])
                        {
                            swap(arr[j],arr[j+1]);
                            swapped = true;
                        }
                    }
                    if(swapped == false){break;}
                }
            }
            void display()
            {
                for(int i=0;i<size;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
            ~Bubble()
            {
                delete []arr;
            }
};
int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the array element: ";
        cin>>arr[i];
    }
    Bubble obj(arr,n);
    obj.Bubble_sort();
    cout<<"After sorting:"<<endl;
    obj.display();
    return 0;
}