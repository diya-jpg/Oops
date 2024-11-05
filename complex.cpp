#include<iostream>
using namespace std;
class Complex{
int a,*b;
public:
void setdata(int x,int y){
a=x;
*b=y;}
void showdata()
{cout<<a<<"+i"<<*b;

}
Complex(){
a=0;
b=(int*)malloc(sizeof(int));
*b=10;
cout<<a<<endl<<b<<endl<<*b;
}
~Complex()
{
    free(b);
}
};
int main(){
    Complex c;
   // c.setdata(5,6);
    //c.showdata();
return 0;
}
