#include<iostream>
using namespace std;
class HDFC;
class SBI
{
    private: string name;
             int accno;
             float balance;
    public: SBI();
            void BalEnq();
            void Deposit(float);
            bool Withdrawal(float);
            bool Transaction(HDFC &);
            friend class HDFC;         
};
class HDFC
{
    private: string name;
             int accno;
             float balance;
    public:  HDFC();
             void BalEnq();
             void Deposit(float);
             bool Withdrawal(float);
             bool Transaction(SBI &);
             friend class SBI;
};

bool SBI::Transaction(HDFC &h)
{
    float amt;
    cout<<"Enter the amt to be transfer from SBI to HDFC: ";
    cin>>amt;

    if(amt <= this->balance)
    {
        this->balance-=amt;
        h.balance+=amt;
        return true;
    }
    return false;
}
bool SBI::Withdrawal(float amt)
{
    if(amt <= balance)
    {
        balance-=amt;   //deduct from SBI
        return true;    //deposit to HDFC
    }
    return false;
}
void SBI::Deposit(float amt)
{
    balance+=amt;
}
SBI::SBI()
{
    cout<<"....Welcome To SBI Bank...."<<endl;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the accno: ";
    cin>>accno;
    cout<<"Enter the balance: ";
    cin>>balance;
}
void SBI::BalEnq()
{
    cout<<"Available balance in SBI: "<<balance<<endl;
}
HDFC::HDFC()
{
    cout<<"....Welcome To HDFC Bank...."<<endl;
    cout<<"ENter the name: ";
    cin>>name;
    cout<<"Enter the accno: ";
    cin>>accno;
    cout<<"Enter the balance: ";
    cin>>balance;
}
void HDFC::BalEnq()
{
    cout<<"Available balance in HDFC: "<<balance<<endl;
}
int main()
{
    SBI sobj;
    sobj.BalEnq();
    // int amt;
    // cout<<"ENter amt to be deposit: ";
    // cin>>amt;
    //sobj.Deposit(amt);
    //sobj.BalEnq();
    // cout<<"ENter amt to be withdraw: ";
    // cin>>amt;
    // if(sobj.Withdrawal(amt))
    // {
    //     cout<<"Transaction SUccessfull...!\n";
    // }
    // else{
    //     cout<<"Insufficient Balance...!\n";
    // }

    HDFC hobj;
    hobj.BalEnq();
    if(sobj.Transaction(hobj))
    {
        cout<<"Transaction successfull, from SBI to HDFC..!\n";
    }
    else{
        cout<<"Transaction Failed, due to insufficient balance in SBI acc\n";
    }
    cout<<"IN SBI, ";
    sobj.BalEnq();
    cout<<"IN HDFC, ";
    hobj.BalEnq();
}