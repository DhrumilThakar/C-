#include<iostream>
using namespace std;
int main()
{
    //***Arethimatic operator***
    int a=5,b=6;
    cout<<"THe following are arethimatic operator"<<endl;
    cout<<"The value of a + b:"<<a+b<<endl;
    cout<<"The value of a - b:"<<a-b<<endl;
    cout<<"The value of a * b:"<<a*b<<endl;
    cout<<"The value of a / b:"<<a/b<<endl;
    cout<<"The value of a % b:"<<a%b<<endl;
    cout<<"The value of a++:"<<a<<endl;
    cout<<"The value of a--:"<<a<<endl;
    cout<<"The value of ++a:"<<a<<endl;
    cout<<"The value of --a:"<<a<<endl;
    //***Comparision operator***
    cout<<"The following are comparision operator"<<endl;
    cout<<"The value of a == b:"<<(a==b)<<endl; 
    cout<<"The value of a != b:"<<(a!=b)<<endl; 
    cout<<"The value of a >= b:"<<(a>=b)<<endl ; 
    cout<<"The value of a <= b:"<<(a<=b)<<endl ; 
    cout<<"The value of a > b:"<<(a>b)<<endl ; 
    cout<<"The value of a < b:"<<(a<b)<<endl ;
    //***Logical operator***
    cout<<"The following are logical operator"<<endl;
    cout<<"The value of a == b && a>=b:"<<((a==b)&&(a>=b))<<endl; 
    cout<<"The value of a != b || a==b:"<<((a!=b)||(a==b))<<endl; 
    cout<<"The value of a !>= b:"<<!(a>=b)<<endl ; 
    //-->haji bitwise baki che
    return 0;
}