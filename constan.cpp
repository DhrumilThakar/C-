//constant j hoi c++ ma e c ni jem j hoi etle eni value change no thai.syntax:-const_datatype_
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //without using constant
    int a=7;
    cout<<"The value of a was "<<a<<endl;
    a=4;
    cout<<"The value of a is:"<<a<<endl;
    //with using constant
    const int b=6;
    cout<<"The value of b is:"<<b<<endl;
    //now if we change the value of b it give us an error
    //***MANIPULATOR***
    /*manipulator are helping functions that can modify the input/output stream.
    i.e.endl and setw(size)[setw use kar va mate apde iomanip ni file ne include kar vi padse]*/
    //**without using setw**
int c=2,d=35,e=235;
cout<<"the value of c:"<<c<<endl;
cout<<"the value of d:"<<d<<endl;
cout<<"the value of e:"<<e<<endl;
//**with use of setw
cout<<"the value of c:"<<setw(4)<<c<<endl;
cout<<"the value of d:"<<setw(4)<<d<<endl;
cout<<"the value of e:"<<setw(4)<<e<<endl;
//*****Operator Precedence*****
/*https://en.cppreference.com/w/cpp/language/operator_precedence
upper ni website ne as a reference levu
->pehla hamesa precedence check kari leva nu jo bai same precendence na hoi to pachi assciativity*/
return 0;
}