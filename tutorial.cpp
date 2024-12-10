#include<iostream>
using namespace std;
int c=69;//-->this is global variable
//precedence of local variable is more than global
int main()
{
    //***built in datatype***
    int a=5,b=6,c;
    cout<<"The value of a:"<<a<<endl; 
    cout<<"The value of b:"<<b<<endl;
    c=a+b;
    cout<<"The value of c is local:"<<c<<endl;
    cout<<"The value of global c is:"<<::c<<endl;
    //***Float,Doulbe & long double literals***
    float d=35.5;
    long double e=35.5;
    //--->by default 35.5 e long double value che float nathi.
    //Pan jo apne en float kevu hoi to 35.5lakhi ne 35.5f lakhvu to e float ma aave
    cout<<"The size of 35.5 is:"<<sizeof(35.5)<<endl;
    cout<<"The size of 35.5f is:"<<sizeof(35.5f)<<endl;
    cout<<"The size of 35.5F is:"<<sizeof(35.5F)<<endl;
    cout<<"The size of 35.5l is:"<<sizeof(35.5l)<<endl;
    cout<<"The size of 35.5L is:"<<sizeof(35.5L)<<endl;
   //***Reference variable***
   //ek nam ane alag alag loko bolave
   int f=17;
   cout<<"The value of f:"<<f<<endl;
   int &g=f;//-->ampersent ni sign lagavi ne apde phela variable ne valu ne copy kai rin
   cout<<"The value of g:"<<g<<endl;
   //***Typecast in c++(ek datatype ne bija ma change kar vu )***
   float h=8.94;
   int i=8;
   cout<<"The value of h:"<<h<<endl;
   cout<<"The value of h:"<<(int)h<<endl;
   //cout<<"The value of h:"<<int(h)<<endl;
   //line no.33 & 34 are same khali syntax 2 type thi laki
   cout<<"The addition of h&i is:"<<(h+i)<<endl;
   cout<<"The addition of h&i is:"<<((int)h+i)<<endl;
   cout<<"The addition of h&i is:"<<(int(h)+i)<<endl;
    return 0;
}