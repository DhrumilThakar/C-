#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i==2)
        {
            break;
        }
        
        cout<<i<<endl;
    }
    cout<<"Code for continue"<<endl;//g value hase ena sivai badhi print thase
    for (int i = 0; i < 5; i++)
    {
        if (i==3)
        {
            continue;
        }
        
        cout<<i<<endl;
    }
    
    
    return 0;
}