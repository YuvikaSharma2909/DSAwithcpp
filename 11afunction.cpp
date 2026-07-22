#include<iostream>
using namespace std;
int power(int a, int b){
    //pow(a,b)
    //a=base
    //b=exponent
    // int a,b;
    // cin>>a>>b;
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
//    int ans= power();
//    cout<<ans<<endl;
//       ans= power();
//    cout<<ans<<endl;
//       ans= power();
//    cout<<ans<<endl;
   cout<<"answer is:"<<power(4,2)<<endl;
    return 0;
}