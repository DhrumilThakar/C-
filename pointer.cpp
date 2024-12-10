#include<iostream>
using namespace std;
int main()
{
    //pointer is a data type which hold the memory adderss of other variable
    int a=8;
    int *b;
    b=&a;
    // Where * is a dereference(value at) operator
    // Where & is adderss of operator
    cout<<"The address of B is:"<<b<<endl;
    /*jyre apde khali pointer na variable nu name lakhsu tyre e variable nu
    address show thase etle &a lakho toi ej thase ane khali b lakho to e j thase */
    cout<<"The value of B is:"<<*b<<endl;//*e variable ni value khabar padse
    //Pointer to poointer
    int **c=&b;
    cout<<"The address of c"<<c<<endl;//pointer nu address print thase
    cout<<"The value of c is"<<**c<<endl;//2 ** thi original a ni vallue avse
    cout<<"The value of address at c"<<*c<<endl;//ek * thi b (line 8) nu address avse
    return 0;
}