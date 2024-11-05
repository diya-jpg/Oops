#include<iostream>
using namespace std;
class test{
int a,b;
public:
void Input(int x,int y)
{a=x;
b=y;}
friend void swap(test t1,test t2);};
void swap(test t1,test t2){int a,b;
cout<<"value of a before swapping"<<a<<endl<<"value of b before swapping"<<b<<endl;
int c;
c=t1.a;
t1.a=t2.b;
t2.b=c;
cout<<"value of a after swapping"<<a<<endl<<"value of b after swapping"<<b<<endl;
}
int main()
{test t1,t2;
t.Input(4,5);
swap(t);
return 0;
}
