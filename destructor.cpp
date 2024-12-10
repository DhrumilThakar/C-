#include<iostream>
using namespace std;
int count=0;
class num
{
    public:
    
    num()
    {
        count++;
        cout<<"This time constructor will be called"<<count<<endl;
    }
    ~num()
    {
        count--;
        cout<<"This time destructor wii be called"<<count<<endl;
    
    }

};
int main()
{
    cout<<"We are in main function"<<endl;
    cout<<"We are going to creat first object"<<endl;
    num n1;
    {
        cout<<"We are in num block and we will creat two more object"<<endl;
        num n2;
        num n3;
        cout<<"Now we will exit the block"<<endl;
    }
    cout<<"Back to pavilion"<<endl;
    
    return 0;
}