#include<iostream>
using namespace std;
int fib(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    return fib(a-2)+fib(a-1);
    
}
int main()
{
    int x;
    cout<<"Enter the term upto wich u have to find a series:";
    cin>>x;
    cout<<fib(x);
    return 0;
}