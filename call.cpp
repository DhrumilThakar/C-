#include<iostream>
using namespace std;
/*This is a call by reference using normal c
->it is call by reference coz it will change its address and not the variable*/
//*****void swap(int *a,int *b)
//{
   // int tem=*a;
   // *a=*b;
   // *b=tem;
//}*****
//This is a call by reference using c++
//->note:-khali argument ma j & use kar va nu
/*void reswap(int &a,int &b)
{
    int tem=a;
    a=b;
    b=tem;

}*/
// agar swap number ne update kar vu hoi to
int & reswap(int &a,int &b)//->return type hare & add kar va nu
{
    int tem=a;
    a=b;
    b=tem;
    return a;

}
int main()
{
    int x=6,y=7;
    cout<<"THE value of x before swap is:"<<x<<endl<<"THE value of y before swap is:"<<y<<endl;
    reswap(x,y)=8;
    cout<<"THE value of x After swap is:"<<x<<endl<<"THE value of y After swap is:"<<y<<endl;
    return 0;
}