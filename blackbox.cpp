#include<iostream>
using namespace std;
class bank
{
    int principle, year;
    float returnvalue, intrest;
    public:
    bank(){}
    bank(int p, int y, int r)
    {
        principle = p;
        year = y;
        intrest = float(r)/100;
        returnvalue = principle;
        for(int i = 0; i<y; i++)
        {
            returnvalue = returnvalue * (1+r);
        }
    }
    bank(int p, int y, float r)
    {
        principle = p;
        year = y;
        intrest = r;
        returnvalue = principle;
        for(int i = 0; i<y; i++)
        {
            returnvalue = returnvalue * (1+intrest);
        }
    }
    void print()
    {
        cout<<"You enter "<<principle<<" for "<<year<<" year and you will get "<<returnvalue<<" in return.THANK YOU";
    }
};
int main()
{
    int p, y, R;
    float r;
    cout<<"Enter the amount of money you want to make deposit : ";
    cin>>p;
    cout<<"\nFor how many year you want to make this deposit:";
    cin>>y;
    cout<<"\nEnter the rate of intrest you want:";
    cin>>r;
    bank b1,b2,b3;
    b1=bank(p,y,r);
    b1.print();
    return 0;
}