#include<iostream>
using namespace std;
class A{
public:
int p;};
class B:public A{
public:
void setdata(){
cout<<"Enter the value of p";
cin>>p;
}
};
class C:public A{
public:
void setdata(){
cout<<"Enter the value of p";
cin>>p;
}
};
int main(){
B b;
C c;
b.setdata();
c.setdata();
cout<<"Mul is"<<b.p*c.p;
return 0;
}
