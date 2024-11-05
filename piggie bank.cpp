#include<iostream>
using namespace std;
class addAmount{
 float amount=50;
 public:
 addAmount(){
 cout<<amount<<endl;
 }
addAmount(float x){
    amount=x;
cout<<"amount is "<<amount;
}
};
int main(){
addAmount a,b(5000);
}

