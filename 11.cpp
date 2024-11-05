#include<iostream>
using namespace std;
class Rectangle {
    public:
    int length,breadth;
    void setdata(){
        cout<<"Length of a rectangle is ";
        cin>>length;
        cout<<"and breadth is";
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
    r.setdata();
    int ans=r.getArea();
    cout<<ans;
}
