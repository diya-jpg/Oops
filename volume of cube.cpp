#include<iostream>
#include<cmath>
using namespace std;
class cube{
int a;
public:
cube(int x){
a=x;
 int v=pow(a,3);
cout<<"volume of cube="<<v;
}
};
int main(){
cube c(7);
}
