#include<iostream>
using namespace std;
class Complex{
int a,b;
public:
Complex(int x,int y){
a=x;
b=y;
}
friend void show(Complex);
Complex operator*(Complex C1){
Complex temp;
temp.a=a*C1.a-b*C1.b;
temp.b=a*C1.b+b*C1.a;
return temp;
}
};
void show(Complex C1){
cout<<C1.a<<"+"<<C1.b<<"i"<<endl;
}
int main(){
Complex C1(1,2);
Complex C2(3,4);
Complex C3;
C3=C1.operator*(C1);
show();
}
