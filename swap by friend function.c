#include<iostream>
using namespace std;
class test{
int a,b;
public:
void Input()
{cout<<"enter the value of a and b"
cin>>a>>b;}
friend void swap(test t);};
void swap(test t){int c;
cout<<"value of a before swapping"<<a<<"value of b before swapping"<<b;
c=a;
a=b;
b=c;
cout<<"value of a after swapping"<<a<<"value of b after swapping"<<b;
}
int main()
{test s;
t.input();
swap(t);
return 0;
}
