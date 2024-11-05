#include<iostream>
#include<fstream>
using namespace std;
void writeToFile(char filename[],char data[])
{
    ofstream o1;
    o1.open(filename,ios::out);
    o1<<data;
  //  cout<<data;
    o1.close();
}
int main()
{
    writeToFile("file1.txt","SKIT ENGINEERING STUDENT ARYA COLLEGE KUKAS ");
    return 0;
}
