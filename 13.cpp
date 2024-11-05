#include<iostream>
using namespace std;
class Rectangle {
    public:
    int length,breadth;
    Rectangle(){
        cin>>length;
        cin>>breadth;
    }
    int getArea(){
        int area;
        area=length*breadth;
        return area;
    }
};
int main() {
    Rectangle r;
    cout<<r.getArea();
}
