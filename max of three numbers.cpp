#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;

    if(a>b && a>c)
    cout<<"maximum is"<<a;
     else if(b>a && b>c)
     cout<<"maximum is"<<b;
     else 
     cout<<"maximum is"<<c;

}