#include<iostream>
using namespace std;
class hostel
{
int age;
static int room;
string name,city,dep;
public:
void getdata()
{
    cout<<"Enter your name:";
    cin>>name;
    cout<<endl<<"Enter your city:";
    cin>>city;
    cout<<endl<<"Enter your age:";
    cin>>age;
    cout<<endl<<"Enter your department:";
    cin>>dep;
    room++;
}
void display()
{
    cout<<" your name is :"<<name<<endl;
    cout<<" your city is :"<<city<<endl;
    cout<<" your age is :"<<age<<endl;
    cout<<" your department is :"<<dep<<endl;
    cout<<"Your id no is: "<<room<<endl;
}
};
int hostel::room;
int main()
{
    hostel h[3];
    for (int i = 0; i <=3; i++)
    {
        h[i].getdata();
        h[i].display();
    }
    
    return 0;
}