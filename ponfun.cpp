#include<iostream>
using namespace std;
bool isprime(int d)
{
    int flag=0;
    for(int i=1;i<=d;i++)
    {
        if(d%i==0)
        {
            flag++;
        }
    }
    if(flag==2)
    {
        return true;
    }
    else
    {
return false;
    }
}
int main()
{
    int a,b;
cout<<"Ennter Two Number:-";
cin>>a>>b;
for (int i = a; i <=b; i++)
{
    if(isprime(i))
    {
        cout<<i<<" ";
    }
}

    return 0;
}