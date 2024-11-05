#include<iostream>
using namespace std;
class Item
{
    int a,b;
    void showData()
    {
        cout<<" \na="<<a<<" \nb="<<b;
    }
    public:
        void setData(int a,int b)
        {
            this->a=a;
            this->b=b;

        }
        friend void fri(Item);
};
void fri(Item i2)
{

    i2.showData();
}
int main()
{
    Item i1;
    i1.setData(10,20);
    //i1.showData();
    fri(i1);
}
