#include<iostream>
using namespace std;
class Complex{
int a,b;
public:
Complex (int a, int b){
this->a=a;
this->b=b;
}
Complex(){}
void showdata(){
cout<<a<<"+i"<<b<<endl;
}
friend Complex add(Complex ,Complex);
};
Complex add( Complex c1,Complex c2){
Complex temp;
temp.a= c1.a+c2.a;
temp.b=c1.b+c2.b;
return temp;
}
int main(){
Complex c1(5,6),c2(4,5),c3;
c1.showdata();
c2.showdata();
c3=add(c1,c2);c3.showdata();}


