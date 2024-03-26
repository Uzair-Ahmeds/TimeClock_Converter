#include <iostream>
#include <string>
using namespace std;
int time(int a,int b);
int main()
{
char ask;
do{
int a,b;
char t,ask;
cout<<endl<<"enter time clock : ";
cin>>a;
cout<<endl<<"enter time minutes : ";
cin>>b;
if(a>12&&a<=24)
{
t='P';
}
else
{
t='A';
}
int c=time(a,b);
cout<<endl<<"time in 12 notation : "<<c<<":"<<b<<":"<<t;
cout<<endl<<"do u want to continue (y/n)? : ";cin>>ask;
}while(ask!='n');
return 0;
}
int time(int a,int b)
{
int c;
if(a>12)
c=a-12;
else
c=a;
return c;
}

