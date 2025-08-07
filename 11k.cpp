#include<iostream>
using namespace std;
int square(){
    int num;
    cout<<"enter the value of num"<<endl;
    cin>>num;
    int ans;
    ans=num*num;
    return ans;
}
int main(){
   // int n;
   // cin>>n;
   //int ans=square(n);
   
   int ans=square();
   cout<<ans<<endl;
    ans=square();
   cout<<ans<<endl;

    return 0;
}