#include<iostream>
using namespace std;
/*
->For a function with argument with Return ma & a function with no argument with Return cout lakhvu
->For a function with argument with no Return &a function with no  argument with no Return ma nai lakhvu
->
*/
int multi(int a, int b)
{
   int multi; 
    multi=a*b;
    cout<<multi;
}
int main()
{
    int a,b,result;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    cout<<"Enter a number:"<<endl;
    cin>>b;
    multi(a,b);
    

    return 0;
}