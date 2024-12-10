#include<iostream>
#include<cmath>
using namespace std;
class simple
{
        public:
    int a,b;
    void getdata()
    { 
     cout<<"Enter a number:";
     cin>>a;
     cout<<"Enter another number:";
     cin>>b;
    }
    int display1(int,int)
    {
   cout<<"Enter your choice to be perform:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division";
   int choice;
   cin>>choice;
   if(choice==1)
   {
    return a+b;
   }
   else if(choice==2)
   {
    return a-b;
   }
   else if(choice==3)
   {
    return a*b;
   }
   else if(choice==4)
   {
    return a/b;
   }
   else{
    cout<<"Enter a valid choice!";
   }
   }
};
class scientific
{
    public:
    int x,y;
    void getdata()
    {
        cout<<"Enter a number : ";
        cin>>x;
        cout<<"Enter another number : ";
        cin>>y;
    }
    int factorial(int a)
    {
        if (a==0 || a==1)
        {
            return 1;
        }
        else
        {
        return factorial(a)*factorial(a-1);
        }
    }
    int display2(int,int)
    {
        int choice;
        cout<<"Enter your choice to perform task :\n1.Squreroot\n2.Numbersqure\n3.Number_to_power\n4.factorial";
        cin>>choice;
        if(choice==1)
        {
            return  sqrt(x),sqrt(y);
        }
        else if(choice==2)
        {
            return pow(x,2),pow(y,2);
        }
        else if(choice==3)
        {
            return pow(x,y),pow(y,x);
        }
        else if(choice==4)
        {
            return factorial(x),factorial(y);
        }
    }
};
class hybrid : public simple,public scientific
{
    public:
    int p,q;
    void getdata()
    {
        p=a;
        q=b;
       
    }
    int display(int,int)
    {
     display1(a,b);
     display2(x,y);
    }

};    
int main()
{
    int g,h;
    hybrid h1;
    h1.getdata();
     cout<<"Enter a number :";
        cin>>h;
        cout<<"Enter another number : ";
        cin>>g;
    h1.display(g,h);  
    return 0;
}