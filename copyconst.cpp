#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number()
    {
        a=0;
    }
    number(int x)
    {
        a=x;
    }
    /*-->BY default ther is a copy constructor of system.Jyare apde call kar su tyre e check kar se ke kai copy
     constructor che kae nai,no hooi to system pote aapse */
    number(number &obj)
    {
        cout<<"Invoking  Copy Constructor !!"<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"The value of number is:"<<a<<endl;
    }
};
int main()
{
  number x,y(7),d,f;
  x.display();
  y.display();
  number z(y); //copy constructor invoke
  z.display();
  d=z;//Here copy constructor will not be invoke(which we have created)
  d.display();
  number e=z;//
  e.display();
    return 0;
}