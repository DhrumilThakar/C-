#include<iostream>
using namespace std;
class student
{
    int roll_no;
    public:
    void set_no(int);
    void getno(void);
};
void student::set_no(int n)
{
    roll_no=n;
}
void student::getno()
{
    cout<<"Your roll number is:"<<roll_no<<endl;
}
class exam:public student
{
    protected:
    int maths,physics,chemistry,english;
    public:
    void set_marks(int,int,int,int);
    void display_marks();
};
void exam::set_marks(int m,int p, int c,int e )
{
    maths=m;
    physics=p;
    chemistry=c;
    english=e;
}
void exam::display_marks()
{
    cout<<"Your marks in Maths are:"<<maths<<endl;
    cout<<"Your marks in Physics are:"<<physics<<endl;
    cout<<"Your marks in Chemistry are:"<<chemistry<<endl;
    cout<<"Your marks in English are:"<<english<<endl;
}
class result:public exam
{
    float percentage;
    public:
    void final(void);
};
void result::final()
{
     getno();//--->function no data type nai lakhvanu
     display_marks();
    cout<<"Your percentage of this academic year is:"<<(maths+physics+chemistry+english)/4<<"%"<<endl;
}
int main()
{
    result r1;
    int roll,p,m,c,e;
    cout<<"Enter your roll number:"<<endl;
    cin>>roll;
    cout<<"Enter the marks you obtain in maths:"<<endl;
    cin>>m;
    cout<<"Enter the marks you obtain in Physics:"<<endl;
    cin>>p;
    cout<<"Enter the marks you obtain in chemistry:"<<endl;
    cin>>c;
    cout<<"Enter the marks you obtain in english:"<<endl;
    cin>>e;
    r1.set_no(roll);
   // r1.getno();
    r1.set_marks(m,p,c,e);
   //r1.display_marks();
    r1.final();
    return 0;
}