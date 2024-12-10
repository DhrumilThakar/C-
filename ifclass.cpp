#include<iostream>
using namespace std;
class even
{
public:
int a,flag=0;
void check(void)
{
for (int i = 1; i <= a; i++)
    {
       
        if (a%i==0)
        {
         flag++;
        }
    }
         if (flag==2)
        {
           cout<<"enter number is prime:"<<a;
        }
        else{
            cout<<"Enter number is even:"<<a;
        }
       
}
 void geta(){
            cout<<"Enter a +ve number:"<<endl;
            cin>>a;
        }
};

int main()
{
    even e;
   e.geta();
    e.check();

    return 0;
}