#include<iostream>
using namespace std;
class demo{
int num;
public:
void set(){
cout<<"enter no.";
cin>>num;
}
void get(){
cout<<num;
}
demo operator++(){
num=num+1;
}
};
int main(){
demo d1,d2;
d1.set();
d1.operator++();
d1.get();
}
