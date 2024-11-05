#include<iostream>
using namespace std;
class Complex{
int a,b;
public:
void setdata(int x,int y){
a=x;
b=y;
}
void showdata(){
cout<<"a="<<a<<endl<<"b="<<b<<endl;
}
Complex  operator+(Complex C2)
{Complex temp;
temp.a=a+C2.a;
temp.b=b+C2.b;
return temp;
}
Complex operator-(Complex C2){
Complex temp;
temp.a=a-C2.a;
temp.b=b-C2.b;
return temp;
}
Complex operator*(Complex C2){
Complex temp;
temp.a=a*C2.a-b*C2.b;
temp.b=a*C2.b+C2.a*b;
return temp;
}
bool operator==(Complex C)
{
    if(a==C.a && b==C.b)
    {
        return true;
    }
    else{
        return false;
    }

}

};
int main(){
    Complex C1,C2,C3;
C1.setdata(4,5);
C2.setdata(4,7);
//C3=C1.operator+(C2);
//C3=C1+C2;
//C3.showdata();
C3=C1.operator -(C2);
//C3.showdata();
C3=C1*C2;
//C3.showdata();
cout<<C1.operator==(C2);
//C3.showdata();
return 0;
}
