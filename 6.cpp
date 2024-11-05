#include<iostream>
using namespace std;
int main(){
int *p=new int [6];
for(int i=0;i<6;i++){
cin>>*(p+i);
}
for(int i=0;i<6;i++){
cout<<*(p+i)<<endl;
}
}
