#include<iostream>
using namespace std;
class Test{
int a;
public:
void setdata(int a){
this->a=a;
}
friend void factorial(Test);
};
void factorial(Test t1){
int fact=1;
for(int i=1;i <= t1.a;i++){
fact=fact*i;
}
cout<<"Factorial is"<<fact;
}
int main(){
Test t1;
t1.setdata(6);
factorial(t1);
return 0;
}
