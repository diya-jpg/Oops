#include<iostream>
using namespace std;
class test
{int n;
public:
void Setvalue()
{
cout<<"enter the value of n";
cin>>n;}
friend void pattern(test t);
};
void pattern(test t)
{int i,j;
for(i=1;i<=t.n;i++)
{for(j=1;j<=i;j++)
{cout<<"*";}
cout<<endl;}
}
int main()
{ test t;
t.Setvalue();
pattern(t);
return 0;
}
