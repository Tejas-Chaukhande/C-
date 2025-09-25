#include<iostream>
using namespace std;
class Insertion
{
    private:int *arr,size;
    public: Insertion(int size)
            {
                this->size = size;
                arr = new int[size];
                
            }
            void Insertion_sort()
            {
                for(int i=0;i<size;i++)
                {
                    int x;
                    cout<<"Enter the array element: ";
                    cin>>x;
                    int j=i;
                    while(j>0 && x<arr[j-1])
                    {
                        arr[j]=arr[j-1];
                        j--;
                    }
                    arr[j]=x;
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
            ~Insertion()
            {
                delete []arr;
            }
};
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    Insertion obj(n);
    obj.Insertion_sort();
    cout<<"Inserted elements in sorted array: "<<endl;
    obj.display();
    return 0;
}