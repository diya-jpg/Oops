#include<iostream>
using namespace std;
class Account{
int account_no;
float balance;
    static int r;
    public:
    void setBalance(int x){
    balance=x;
    }
    void getBalance()
    {
        cout<<"balance is"<<balance<<endl;
    }
    void setAccountno(int y){
    account_no=y;
    }
    void getAccountno()
    {
cout<<"Account no."<<account_no<<endl;

    }
    static void setvalue(int n){
r=n;
    }
    static void getvalue()
    {
        cout<<"rate of interest is"<<r<<endl;

    }
};
int Account::r;
int main()
{
    Account A;
    A.setBalance(60000);
    A.getBalance();
    A.setAccountno(56);
    A.getAccountno();
   Account::setvalue(25);
    Account::getvalue();
    return 0;
}
