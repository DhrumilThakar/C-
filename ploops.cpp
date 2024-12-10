#include<iostream>
using namespace std;
int main()
{
    /*cout<<"to find number of digits"<<endl;
    int n,count=0;
    cout<<"Enter a number:";
    cin>>n;
    while (n>0)
    {
        
       n= n/10;
        count++;
    }
    cout<<count;*/
    /*cout<<"To find sum of digit"<<endl;
    int n,count=0,reminder;
    cout<<"Enter a number:";
    cin>>n;
    while (n>0)
    {
    reminder=n%10;
    count=count+reminder;
    n=n/10;
    }
    cout<<count;*/
    /*cout<<"To reverse the digit"<<endl;
    int n,count=0,reminder;
    cout<<"Enter a number:";
    cin>>n;
    while (n>0)
    {
        reminder=n%10;
        count=count*10+reminder;
        n=n/10;
    }
    cout<<count;*/
    cout<<"To find the sum of the series:1-2+3-4.....n"<<endl;
    int n,count=0,reminder;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0)
    {
        n++;
        if(n%2==0)
        {
            count=count+n;
        }
        else
        {
            count=count-n;
        }
    }

cout<<count;
    return 0;
}