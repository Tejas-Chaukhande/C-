#include<iostream>
using namespace std;
class Student
{
    private: int Scores[5];
    public: 
            void input()
            {
                for(int i=0;i<5;i++)
                {
                    cout<<"Enter the marks: ";
                    cin>>Scores[i];
                }
            }
            int Calculate_total_score()
            {
                int total=0;
                for(int i=0;i<5;i++)
                {
                    total=total+Scores[i];
                }
                return total;
            }

};
int main()
{
    int n;
    cout<<"Enter no. of students: ";
    cin>>n;

    Student *s=new Student[n];   //Allocated memory for Student class for n no. of students

    for(int i=0;i<n;i++)
    {
        cout<<"Enter marks for Student "<<i+1<<endl;
        s[i].input();
    }
    int tejas_score=s[0].Calculate_total_score();   //calculating tejas score
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        int total=s[i].Calculate_total_score();
        if(total>tejas_score)
        {
            cnt++;
        }
    }
    cout<<cnt<<" Student score more than Tejas"<<endl;
    return 0;

}