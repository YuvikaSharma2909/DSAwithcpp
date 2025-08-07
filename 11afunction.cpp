#include<iostream>
using namespace std;
int power(){
    //pow(a,b)
    //a=base
    //b=exponent
    int a,b;
    cin>>a>>b;
    int ans=1;
    for (int i = 1; i<=b; i++)
    {
        ans=ans*a;
    }
   // cout<<ans<<endl;
    return ans;
}
int main(){
    
   /* int a,b;
    cin>>a>>b;
   int answer=power(a,b);
  cout<<"answer is : "<<answer<<endl;
  */  
   int ans= power();
   cout<<ans<<endl;
      ans= power();
   cout<<ans<<endl;
      ans= power();
   cout<<ans<<endl;
   //cout<<"answer is:"<<power()<<endl;
    return 0;
}