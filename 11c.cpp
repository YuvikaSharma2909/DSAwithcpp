#include<iostream>
using namespace std;
int sum( int num1,int num2){
  // int num1,num2;
    int ans;
   // cin>>num1>>num2;
    ans=num1+num2;
    return ans;
}
int product(){
    int num1,num2;
    cin>>num1>>num2;
    int prod;
    prod=num1*num2;
    return prod;
}
int main(){
   
    cout<<sum(2,3)<<endl;
    //  cout<<sum()<<endl;
cout<<product()<<endl;
    //   cout<<sum()<<endl;
}