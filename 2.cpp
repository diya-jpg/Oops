#include<iostream>
using namespace std;
class A{
public:
int a;
void setdata1(){
cout<<"Enter the value of a";
cin>>a;}
void display1(){
cout<<"Value of a is"<<a<<endl;
}
};
class B:public A{
int b;
public:
void setdata2(){
cout<<"Enter the value of b";
cin>>b;
}
display2(){
cout<<"Value of b is"<<b<<endl;
}
void multiply(){
cout<<"Multiply is"<<a*b;
}
};
int main(){
B b1;
b1.setdata1();
b1.setdata2();
b1.display2();
b1.display1();
b1.multiply();
return 0;
}
