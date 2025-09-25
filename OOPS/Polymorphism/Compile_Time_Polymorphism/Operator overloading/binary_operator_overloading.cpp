#include<iostream>
using namespace std;
class Matrix
{
    private: int mat[2][2];
    public:
            Matrix operator +(Matrix &);   //Binary operator overloading
            void getdata();
            void showdata();
};
Matrix Matrix::operator +(Matrix &C)
{
    Matrix temp;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            temp.mat[i][j]=mat[i][j]+C.mat[i][j];
        }
    }
    return temp;
}
void Matrix::getdata()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"Enter the matrix element: ";
            cin>>mat[i][j];
        }
    }
            
}
void Matrix::showdata()
{
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    Matrix m1,m2,m3;
    m1.getdata();
    m1.showdata();
    m2.getdata();
    m2.showdata();

    cout<<"Addition is: "<<endl;
    m3=m1+m2;
    m3.showdata();
    return 0;    
}