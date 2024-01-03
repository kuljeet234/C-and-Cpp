#include <iostream>
using namespace std;
 
int main()
{
    int x = 10;
 
    
    int& ref = x;
 
    
    ref = 20;
    cout << "x = " << x <<"address of x"<<&x<<'\n';
 
    
    x = 30;
    cout << "ref = " << ref <<"address of ref"<<&ref<< '\n';
 
    return 0;
}