#include<iostream>
using namespace std;
class Complex{
public:
int re,img;
};
class B{
public:
Complex C1,C2;
};
int main(){
B b1;
cout<<"Enter first complex";
cin>>b1.C1.re>>b1.C1.img;
cout<<"Enter second complex";
cin>>b1.C2.re>>b1.C2.img;
cout<<"sum is"<<b1.C1.re+b1.C2.re<<"+i"<<b1.C1.img+b1.C2.img;
return 0;
}
