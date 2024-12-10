/*SYNTAX FOR MULTIPLE INHERITANCE
class derived-class name:visibility-mode base-class1,visibility-mode base-class2*/
#include<iostream>
using namespace std;
class experience
{
    protected:
    int years;
    public :
    void setdata(int y)
    {
        years=y;
    }
     void getdata()
     {
        
     }
};
class age
{
    protected:
    int month;
    public :
    void setdata(int m)
    {
        month=m;
    }
};
class employee:public experience,public age
{
    public:
    void show(int a,int b)
    {
        cout<<"Your experience in year are : "<<years<<endl;
        cout<<"your experience in months is : "<<month<<endl;
    } 
};
int main()
{
    int years,month;
    employee e1;
     cout<<"Enter your age in months:";
        cin>>month;
        cout<<"Enter your experience in years:";
        cin>>years;
    e1.show(years,month);
    return 0;
}