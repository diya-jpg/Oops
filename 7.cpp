#include<iostream>
using namespace std;
class Skit{
int x,y;
public:
Skit(){
cout<<"Enter two no.\n";
cin>>x>>y;}
void show(){
cout<<x<<y;}
};
main(){
Skit*p;
(new Skit)->show();
p=new Skit;
p->show();
Skit*q;
q=new Skit;
(*q).show();
(*(new Skit)).show();
}
