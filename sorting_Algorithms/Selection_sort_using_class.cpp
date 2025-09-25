#include<iostream>
using namespace std;
class Selection
{
    private: int *arr,size;
    public: Selection(int *arr, int size)
            {
                this->size = size;
                this->arr = new int[size];
                for(int i=0;i<size;i++)
                {
                    this->arr[i] = arr[i];
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
            void Selection_sort()
            {
                for(int i=0;i<size-1;i++)
                {
                    int min_index = i;
                    for(int j=i+1;j<size;j++)
                    {
                        if(arr[j]<arr[min_index])
                        {
                            min_index = j;
                        }
                    }
                    if(min_index != i)
                    {
                        int temp = arr[min_index];
                        arr[min_index] = arr[i];
                        arr[i] = temp;
                    }
                }
            }
            ~Selection()
            {
                delete []arr;
            }
};
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the array element"<< "["<<i+1<<"]: ";
        cin>>arr[i];
    }

    Selection obj(arr,n);
    cout<<"Before sorting: "<<endl;
    obj.display();
    obj.Selection_sort();
    cout<<"After sorting: "<<endl;
    obj.display();
    return 0;
}