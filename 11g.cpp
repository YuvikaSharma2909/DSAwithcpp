#include<iostream>
using namespace std;
//function signature
void counting( int n){
    //function body
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<" ";
    }
    //we don't use return because hamne return thodi maanga hai ham toh print kar re
   // cout<<endl;
}
int main(){
     int a;
     cout<<"enter the value of a till you want your counting"<<endl;
     cin>>a;
     //function call

    counting(a);
    return 0;
}