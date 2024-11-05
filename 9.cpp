#include<iostream>
using namespace std;
class A{
int a;
friend class B;
};
class B{
public:
void set(A&a1){
cin>>a1.a;
}
void get(A&a1){
cout<<a1.a;
}
};
main(){
B bbb;
bbb.set(5);
bbb.get(6);
}
