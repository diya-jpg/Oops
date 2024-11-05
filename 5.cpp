#include<iostream>
using namespace std;
class Skit{
public:
int p,q;
void set(int x,int y){
p=x;
q=y;
}
void get(){
cout<<p<<" "<<q<<endl;
}
};
class vit:public Skit{

};
int main(){
vit v1,v2;
v1.set(3,6);
v1.get();
v2.p=5;
v2.q=8;
v2.get();
}
