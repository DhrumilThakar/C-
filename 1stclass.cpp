#include<iostream>
using namespace std;
class car   //-->sidhu class ma nai lakh va mandva nu coz by deafult class private hoi 
{
    public:
    string name;
    int price;
    void setdata(string n,int p );
  // jyre private member ne apde value assign kari ye tyre pachu data type "NO" lakhvu  
    void getdata()
    {
        cout<<"The  name  of car is:"<<name<<endl;
        cout<<"The  price of car is:"<<price<<endl;
    }
};
void car::setdata(string n,int p )
{
  name=n;
  price=p;  
}
int main()
{
    string n;
    int p;
    car c;
    cout<<"Enter your car name:";
    cin>>n;
    cout<<endl;
    cout<<"Enter your car price:";
    cin>>p;
    c.setdata(n,p);
    c.getdata();
   
    return 0;
}