//This code is for friend class (when there is many function in class to make friend)
#include<iostream>
using namespace std;
//Forward Declaration (vishvas devdava mate)
class complex;
class A
{
    public:
    int sumcomplex(complex, complex);
    int sumicomplex(complex, complex);
};
class complex
{
int a,b;
public:
/*friend int A::sumcomplex(complex, complex);
friend int A::sumicomplex(complex, complex);*/
//Har timme am friend function ne declar kar vu na posai to apde bija clas ne j freind class kari deye
friend class A;
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
int A::sumcomplex(complex c1,complex c2)
{
    return(c1.a+c2.a);
}
int A::sumicomplex(complex c1,complex c2)
{
    return(c1.b+c2.b);
}
int main()
{
    complex a,b,c;
    int z,x,n,m,s,r;
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
    A cal;
    s=cal.sumcomplex(a,b);
    cout<<"The sum of real part of the numbers is:"<<s<<endl;
    r=cal.sumicomplex(a,b);
    cout<<"The sum of imaginary part of the numbers is:"<<r<<endl;
    return 0;
}