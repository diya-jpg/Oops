#include<iostream>
using namespace std;
class A{
public:
A(){
cout<<"Base A"<<endl;
}
};
class B:public A{
public:
B(){
cout<<"Class B"<<endl;
}
};
class C:public B{
public:
C(){
cout<<"Class C"<<endl;
}
};
class D:public C{
public:
D(){
cout<<"Class D"<<endl;
}
};
int main(){
D d;
}
