#include<iostream>
using namespace std;
class Time{
int hr,min,sec;
public:
void setTime(int x,int y,int z){
hr=x;
min=y;
sec=z;
}
void showTime(){
cout<<hr<<" "<<min<<" "<<sec<<" "<<endl;
}
Time operator +(Time T2){
Time temp;
temp.hr=hr+T2.hr;
temp.min=min+T2.min;
temp.sec=sec+T2.sec;
return temp;
}
Time operator -(Time T2){
Time temp;
temp.hr=hr-T2.hr;
temp.min=min-T2.min;
temp.sec=sec-T2.sec;
return temp;
}
bool operator>(Time T)
{
    if(hr>T.hr)
        return true;
    else if(hr<T.hr)
        return false;
    else if(min<T.min)
        return false;
    else if(min>T.min)
        return true;
    else if(sec>T.sec)
        return true;
    else if(sec<T.sec)
        return false;
    else
            return false;

}
Time operator++(int)  // post increment
{
    Time temp=*this;
    sec++;
    min+=sec/60;
    sec=sec%60;
    hr+=min/60;
    min=min%60;
    return temp;
}
Time operator++()  // pre increment
{
    sec++;
    min+=sec/60;
    sec=sec%60;
    hr+=min/60;
    min=min%60;
    return *this;
}
};
int main(){
Time T1,T2,T3;
T1.setTime(5,10,30);
T2.setTime(5,20,20);
T3=T1+T2;
T3.showTime();
T3=T1-T2;
T3.showTime();
cout<<T1.operator >(T2);
Time T4=++T1;
T4.showTime();
Time T5=T2++;
T5.showTime();
return 0;
}
