#include<iostream>
using namespace std;
//Constructor ne overload mate apde compulsary 1 default constructor kar vu pade
class dhruv
{
    public:
    int marks,subject;
  dhruv()//
{
    marks=0;
}
dhruv(int m)
{
    marks=m;
    subject=0;
}
dhruv(int m, int n)
{
    marks=m;
    subject=n;
}
void displaydata()
{
    cout<<"You have "<<marks<<"in"<<subject<<"Subject"<<endl;
}  
};
int main()
{
    dhruv d1;
    d1.displaydata();
    dhruv d2(5);
    d2.displaydata();
    dhruv d3(50,4);
    d3.displaydata();
    return 0;
}