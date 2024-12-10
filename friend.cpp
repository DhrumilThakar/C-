//We need friend  function to access private member of class.
#include<iostream>
using namespace std;
class complex
{
int a,b;
public:
friend complex sum(complex o1, complex o2);//now this function (sum) can access any private member of commplex class
void setdata(int n1,int n2)
{
    a=n1;
    b=n2;
}
void print()
{
    cout<<a<<" "<<"+"<<b<<"i";
}
};
complex sum(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex a,b,c;
    int z,x,n,m;
    cout<<"Enter real part :";
    cin>>z;
    cout<<"Enter imaginary part:";
    cin>>x;
    cout<<"Enter real part :";
    cin>>n;
    cout<<"Enter imaginary part:";
    cin>>m;
    a.setdata(z,x);
    a.print();
    cout<<endl;
    b.setdata(n,m);
    b.print();
    cout<<endl;
    c=sum(a,b);
    c.print();
    return 0;
}
/*
property of friend function:
1.It is not inside the class.
2.coz it is not in the class class member can't access it
i.e:-a.sum(a,b) will give error.
3.it can be called without help of any obj.
4.Usually object are pass as  argument to the friend function.
5.There is no any specific location for declaring friend function.
6.It can't access member directly by there name it requier obj_name.member_name to access any membr
*/
