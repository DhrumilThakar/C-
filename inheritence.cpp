#include<iostream>
using namespace std;
class employee
{
   double salary;//can't be inhertet
    public:
    int id,age;
    string name;
    double monumber;
    char gender[1];
    employee()
    {
        int s;
        salary=s;
        cout<<"Enter Employee name:-";
        cin>>name;
        cout<<"Enter Employee ID:-";
        cin>>id;
        cout<<"Enter"<<" "<<name<<"'s age:-";
        cin>>age;
        cout<<"Enter"<<" "<<name<<"'s gender:-";
        cin>>gender;
        cout<<"Enter"<<" "<<name<<"'s mobile number:-";
        cin>>monumber;
    }
    void display()
    {
        cout<<"Employee name is:-"<<name<<endl;
        cout<<"Employee ID is:-"<<id<<endl;
        cout<<"Employee age is:-"<<age<<endl;
        cout<<"Employee gender is:-"<<gender<<endl;
        cout<<"Employee mobile number is:-"<<monumber<<endl;
    }
};
//**NOW WE ARE GOING TO INHERIT THE CLASS DATA**
//SYNTAX:- class derived_class_name : visibility_mode base_class_name
class student: employee //-->By default the visibility mode is private
{
    public:
     int marks[5];
    student()
    {
   
    for(int i=0;i<6;i++)
    {
        cout<<"Enter marks of"<<" "<<i+1<<" "<<"subject:-";
        cin>>marks[i];
    }
    }
    
    void display()
    {
        for (int i = 0; i <6; i++)
        {
            cout<<"Marks in"<<i+1<<" "<<"subject is:-"<<marks[i]<<endl;
        }  
    }
};
int main()
{
    employee e1;
    e1.display();
    student s1;
    s1.display();
    return 0;
}