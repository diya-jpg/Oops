#include<iostream>
#include<string.h>
using namespace std;
class Person {
char name[10];
int age;
public:
void setValue(){
   cin>>name;
cin>>age;
}
void getValue(){
    cout<<"The name of the person is"<<name<<"and the age is"<<age;
}
};
int main() {
     Person p;
     p.setValue();
     p.getValue();
    return 0;
}
