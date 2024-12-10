#include <iostream>
using namespace std;
class dhruv
{
int data;
public:
int marks;
//Here name of class and function are same because we want to make a construtor
/*Constructor is a special member function with same name as class 
->it is use to innitial the object of its class
->it automatically invoke whenever an object is created */ 
dhruv()//-->This is a default constructor(as it doesn't take any parameter)
{
    cout<<"Enter your marks";
    cin>>marks;
}
void displaydata()
{
    cout<<"You have "<<marks<<endl;
}
};
int main()
{
    dhruv d;
    d.displaydata();
    return 0;
}
//characteristic of constructor
/*
1.It should be declar in public part of class.
2.They are automatically invoke whenever an object is created.
3.They can't return value and does not have return type.
4.It can have default argument.
5.We can not refer to their address.
*/