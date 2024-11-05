#include<iostream>
using namespace std;
class Matrix{
     int i, j;
int arr[i][j];
void input();
void output(){for(int i=0;i<=3;i++){
    for(int j=0;j<=3;j++){
        cout<<arr[i][j];
    }
}
}
void operator+(Matrix);
void operator-(Matrix);
void operator*(Matrix);
};
void Matrix::input(){
for(int i=0;i<=3;i++){
    for(int j=0;j<=3;j++){
        cin>>arr[i][j];
    }
}
}
void Matrix::operator+(Matrix x){
Matrix temp;
for(Matrix i=0;i<=3;i++){
    for(Matrix j=0;j<=3;j++){
        temp.arr[i][j]=arr[i][j]+x.arr[i][j];
        return temp;
    }
}
}
int main(){
Matrix M1,M2;
cout<<M1.operator+(M2);}
