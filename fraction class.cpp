#include<iostream>
#include<algorithm>
using namespace std;
class fraction{
private:
int num,den;
public:
fraction(int N,int D){
num=N;
den=D;
}
void Add(fraction &ob){
if(den==ob.den){
num=num+ob.num;
this->Simplify();
}
else{
num=(num*ob.den)+(ob.num*den);
den=den*ob.den;
this->Simplify();
}
}
void Multiply(fraction &ob){
num=num*ob.num;
den=den*ob.den;
this->Simplify();
}
void Simplify(){
int divide=__gcd(num,den);
num=num/divide;
den=den/divide;
}
void Print(){
cout<<num<<"/"<<den<<endl;
}
};
int main(){
int num,den;
cout<<"enter the num and den";
cin>>num>>den;
fraction ob(num,den);
int t;
cin>>t;
while(t--){
int a,b,choice;
cout<<" enter the choice ,a and b";
cin>>choice>>a>>b;
fraction obj1(a,b);
if(choice==1){
ob.Add(obj1);
ob.Print();
}
else{
ob.Multiply(obj1);
ob.Print();
}
choice--;
}
return 0;
}

