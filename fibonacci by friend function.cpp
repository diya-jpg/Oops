#include<iostream>
using namespace std;
class Test{
int a;
public:
void setdata(int b){
a=b;
}
friend void fibonacci(Test);
};
void fibonacci(Test t){
int x,y,z,i;
x=0;
y=1;
cout<<"fibonacci series is"<<x<<" "<<y;
for(i=3;i<=t.a;i++){
z=x+y;
x=y;
y=z;
cout<<" "<<z;}
}
int main(){
Test t;
t.setdata(8);
fibonacci(t);
return 0;
}
