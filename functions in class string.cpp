#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   string str = "bhavika love kuljeet very very much hehe";
    
    cout<< str<<endl;
    str.erase(str.begin()+2,str.begin()+9); 
    cout<<str;
    return 0;
}
//bhavika love kuljeet very very much hehe//

