#include<iostream>
#include<cmath>
using namespace std;
class point
{
    int a,b;
    public:
   point(int x,int y)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<"Your point are:("<<a<<","<<b<<")";
    }
    friend float distance(point p1,point p2);
};
 float distance(point p1 , point p2)
{
    float r = pow((p2.a-p1.a),2)+pow((p2.b-p1.b),2);
    return sqrt(r);
}
int main()
{
    point a(1,5);
    point b(2,5);
    a.print();
    b.print();
    cout<<"\nThe Distance between the two points is:"<<distance(a,b);
    return 0;
}