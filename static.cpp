#include<iostream>
using namespace std;
class dhruv
{
int marks;
static int count;//Declaration of static variable
public:
void getdata()
{
    cout<<"Enter your marks";
    cin>>marks;
    count++;
}
void displaydata()
{
    cout<<"You have "<<marks<<" In subject"<<count<<endl;
}
static void value()
{
    //IT will only allow "Static variable" as member in the funnction
    cout<<"The value of count is :"<<count<<endl;
}
};
int dhruv::count;//by default value is "0"
int main()
{
 dhruv d,h,a,v;
 d.getdata();
 d.displaydata();
 dhruv::value();
 h.getdata();
 h.displaydata();
 dhruv::value();
 a.getdata();
 a.displaydata();
  dhruv::value();
 v.getdata();
 v.displaydata();
 dhruv::value();
    return 0;
}