#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int bra;

    public:

    void setlength(int l){
        if (l>=0)
        length = l;
        else
        cout<<"length is in negative";

    }

    void setbreadth(int b){
       if (b>=0){
        bra = b;
       }
        else{
        cout<<"breadth is in negative";
        } 
        }

        int area(){
        return length * bra;
    }

    
};

int main()
{
    rectangle r;
    r.setbreadth(5);
    r.setlength(11);
    cout<<r.area();


    
    return 0;
}