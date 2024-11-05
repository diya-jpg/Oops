#include<iostream>
using namespace std;
class factorial{private:
int x;
public:
    void show(){
    cout<<"factorial"<<endl;}

void generate(int n );
};
void factorial::generate(int n)
{x=n;
int a=1;
    for (int i=1;i<=n;i++){
        a=a*i;}
        cout<<a;
    }
 int main()
 {
 factorial f;
 f.show();
 f.generate(4);
 return 0;
 }
