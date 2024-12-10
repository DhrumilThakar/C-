#include<iostream>
using namespace std;
class person
{
    int age;
    string name;
    public:
    void setdata(int,string);
    void display();
};
void person::setdata(int a,string n)
{
    age=a;
    name=n;
}
void person::display()
{
    cout<<"Your name is "<<name<<" "<<"and your age is "<<age<<endl;
}
class student:public person
{
    float percentage;
    public:
    void setdata_per(float);
    void display_percentage();
};
void student :: setdata_per(float p)
{
    percentage=p;
}
void student :: display_percentage()
{
    cout<<"Your percentage is :"<<percentage<<endl;
}
class teacher:public person
{
    double salary;
    public:
    void set_salary(int n) ;
    void display_salary();
};
void teacher :: set_salary(int s)
{
    salary=s;
}
void teacher :: display_salary()
{
    cout<<"Your salary is :"<<salary<<endl;
}
int main()
{
    
    return 0;
}