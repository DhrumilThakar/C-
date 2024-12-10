#include<iostream>
using namespace std;
int main()
{
    /*int num,sum=0;
    cout<<"Enter the upto which you have to print the sum:";
    cin>>num;
    for (int  i = 1; i <=num; ++i)
    {
        sum+=i;
        
    }
    cout<<"The reuslt is:"<<sum<<endl;*/
    int n,flag=0,s;
    cout<<"Enter a number:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
       
        if (n%i==0)
        {
         flag++;
        }
    }
         if (flag==2)
        {
           cout<<"enter number is prime:"<<n;
        }
        else{
            cout<<"Enter number is even:"<<n;
        }
    return 0;
}