#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
        A(int x)
        {
            a=x;
        }
    friend void add(A a1,B b1);
};
class B
{
    int b;
    public:
        B(int x)
        {
            b=x;
        }
    friend void add(A,B);
};
void add(A a1,B b1)
{


   int sum=a1.a+b1.b;
   cout<<"sum is " <<sum<<endl;
}
int main()
{
    A a2(1);
    B b2(2);
    add(a2,b2);
}
