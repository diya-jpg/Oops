#include<iostream>
#include<string.h>
using namespace std;
class employee{
char name[15];
int id;
float salary;
public:
    void setdata(void);
    void getdata();
};

void employee::setdata(){
cout<<"enter the name "<<endl;
cin>>name;
cout<<"enter the id"<<endl;
cin>>id;
cout<<"enter the salary"<<endl;
cin>>salary;
}
void employee:: getdata(){
cout<<"name is"<<name<<endl;
cout<<"Id is"<<id<<endl;
cout<<"Salary is"<<salary<<endl;
}
int size=3;
int main(){
employee e[3];
for(int i=0;i<3;i++){
 e[i].setdata();}
for(int i=0;i<3;i++){
 e[i].getdata();}
return 0;
}

