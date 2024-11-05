#include<iostream>
using namespace std;
class B;
class A{
int x;
public:
A(){
    cout<<"Enter the value of x";
cin>>x;
}
friend int sum(A,B);
};
class B{
int y;
public:
B(){
    cout<<"Enter the value of y";
cin>>y;}
friend int sum(A,B);
};
int sum(A a1,B b1){
return a1.x+b1.y;
}
main(){
A a1;
B b1;
cout<<sum(a1,b1)<<endl;
}
