#include<iostream>
using namespace std;
class Test{
int p,r,t;
public:
    void setdata(){
    cout<<"enter the value of p,r,t";
    cin>>p>>r>>t;
    }
    friend float interest(Test );
    };
    float interest(Test x)
    {
    return (x.p*x.r*x.t)/100;
    }
    int main(){
    Test x;
    x.setdata();
    int c=interest(x);
    cout<<c;
    return 0;
    }
