#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ofstream outf("Country");
 cout<<"Enter country name"<<endl;
 char name[50];
 cin>>name;
 cout<<"Enter country capital"<<endl;
 char cap[50];
 cin>>cap;
 outf<<name<<endl;
 outf<<cap<<endl;
 outf.close();
 ifstream inf("Country");
 inf>>name;
 inf>>cap;
 cout<<'\n';
 cout<<"Country name is : "<<name<<endl;
 cout<<"Country capital is : "<<cap<<endl;
 inf.close();

    return 0;
}