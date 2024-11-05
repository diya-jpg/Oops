#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    void setdata(){
        cout<<" ";
        cin>>real>>img;
    }
    Complex operator +(Complex Z){
     Complex temp;
       temp.real=real+Z.real;
      temp.img=img+Z.img;
     return temp;
    }
    Complex operator *(Complex Z){
      Complex temp;
     temp.real=real*Z.real-img*Z.img;
     temp.img=real*Z.img+Z.real*img;
     return temp;
    }
    void showdata(){
    cout<<real<<"+"<<"i"<<img;
    }
};
int main(){
    Complex C1,C2;
    C1.setdata();
    C2.setdata();
    int c;
    cout<<" ";
    cin>>c;
    if(c==1){
        C1=C1+C2;
        C1.showdata();
    }
     else if(c==2){
        C1=C1*C2;
        C1.showdata();}
        else{

        }
}
