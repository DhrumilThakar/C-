#include<iostream>
#include "operator_overloading.h"
using namespace std;
//example of binary operator overloading
/*class complex
{
    int a,b;
   public:
   complex(){}
   complex(int x, int y)
   {
    a=x;
    b=y;
   }
   complex operator+(complex c)
   {
    return complex((a+c.a),(b+c.b));
   }
    void showdata()
    {
        cout<<a<<" + "<<b<<"i";
    }
};
int main()
{
    complex c1(2,4),c2(5,5),c3;
  c3=c1+c2;
  c3.showdata();
    return 0;
}*/
//Exqmple of unary operator overloading
/*class complex
{
    int a,b;
    public:
    complex(){}
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    complex operator-()
    {
       complex temp;
       temp.a=-a;
       temp.b=-b;
       return temp;
    }
    void showdata()
    {
        cout<<a<<" + "<<b<<"i";
    }
};
int main()
{
    complex c1,c2;
    c1.setdata(3,4);
    c2=-c1;
    c2.showdata();
    return 0;
}*/
//Example of binary operator overloading using friend function ***ama kahli 2 parameter pass kar vana
/*class complex
{
    int a,b;
    public:
    complex(){}
    complex(int x, int y)
    {
        a=x;b=y;
    }
    friend complex operator+(complex c,complex d)
    {
        complex temp;
        temp.a=c.a+d.a;
        temp.b=c.b+d.b;
        return temp;
    }
    void showdata()
    {
        cout<<a<<" + "<<b<<"i";
    }
};
int main()
{
    complex c1(4,5),c2(2,5),c3;
    c3=c1+c2;
    c3.showdata();
    return 0;
}*/
//Example of unary operator overloading using friend function ***ama kahli 1 parameter pass kar van
class complex
{
    int a,b;
    public:
    complex(){}
     void setdata(int x, int y)
    {
        a=x;
        b=y;
    }
    friend complex operator-(complex c)
    {
        complex temp;
        temp.a=-c.a;
        temp.b=-c.b;
        return temp;
    }
    void showdata()
    {
        cout<<a<<" + "<<b<<"i";
    }
};
int main()
{
    complex c1,c2;
    c1.setdata(4,5);
    c2=-c1;
    c2.showdata();
    return 0;
}