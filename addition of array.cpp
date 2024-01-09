#include<iostream>
using namespace std;

int main()

{
    int n,i,array[30],sum[30],arrey[30];
    
    cout<<"enter the number of elements in the  array "<<endl;
    cin>>n;
    cout<<"enter the element in the first array "<<endl;
    for( i = 0;i<n;i++){
       
        cin>>array[i];
    }
     cout<<"enter the element in the second array"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arrey[i];
    }
    cout<<"the sum is "<<endl;

    for(int i = 0;i<n;i++){
        sum[i]=array[i]+arrey[i];
        cout<<sum[i]<<endl;
    }


    return 0;
}