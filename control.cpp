/*There are three type of control structure
1.sequence structure
2.selection structure
3.loop structure*/
#include<iostream>
using namespace std;
int main()
{
    //***exampal of selection structure***(if-else)
int age;
cout<<"Enterr your age:"<<endl;
cin>>age;
if(age<18)
{
    cout<<"You are not an adult"<<endl;
}
else
{
    cout<<"You are a man now"<<endl;
}
//***exampal of selection structure***(switch)
int age;
cout<<"Enterr your age:"<<endl;
cin>>age;
switch (age)
{
case 18:
    cout<<"You are adult";
    break;//->here break is use to break when it found a match 

default:
cout<<"You are kid";
    break;
}
    return 0;
}