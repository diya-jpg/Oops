#include<string.h>
#include<iostream>
using namespace std;
class Person {
string name;
int age;
public:
void setValue(){
cin>>name;
cin>>age;}
void getValue(){
 cout<<"The name of the person is "<<name<< " and the age is " <<age;
}
};
int main() {
     Person p;
     p.setValue();
     p.getValue();
    return 0;
    }
