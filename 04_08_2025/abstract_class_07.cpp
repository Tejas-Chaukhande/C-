/*
Abstract Class & Pure Virtual Functions
Create an abstract class BankAccount with:
deposit() and withdraw() as pure virtual functions.
Create classes SavingsAccount and CurrentAccount that implement them.
*/
#include<iostream>
using namespace std;
class BankAccount
{
    protected: double balance;
    public: BankAccount()
            {
                balance=0;
            }
            virtual void deposit(double)=0;
            virtual void withdraw(double)=0;
            virtual void balEnq()=0;
};
class SavingsAccount:public BankAccount
{
    public: void deposit(double amt)
            {
                balance += amt;
            }
            void withdraw(double amt)
            {
                balance -= amt;
            }
            void balEnq()
            {
                cout<<"Available balance is: "<<balance<<endl;
            }
};
class CurrentAccount:public BankAccount
{
    public: void deposit(double amt)
            {
                balance +=amt;
            }
            void withdraw(double amt)
            {
                balance -=amt;
            }
            void balEnq()
            {
                cout<<"Available balance is: "<<balance<<endl;
            }
};
int main()
{
    BankAccount *ptr=NULL;
    SavingsAccount s;
    ptr=&s;
    ptr->deposit(10000);
    ptr->withdraw(6000);
    ptr->balEnq();

    CurrentAccount c;
    ptr=&c;
    ptr->deposit(8000);
    ptr->withdraw(5000);
    ptr->balEnq();
    return 0;
}