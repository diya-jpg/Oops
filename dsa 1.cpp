#include<iostream>
using namespace std;
int main(){
int n,arr[n],value;
cout<<"enter the value of n";
cin>>n;

cout<<"Enter the elements in array";

for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"enter the element to be searched";
cin>>value;
for(int k=0;k<n;k++){
if(arr[k]==value){
cout<<arr[k];
}
}
cout<<"Element not found";
return 0;
}
