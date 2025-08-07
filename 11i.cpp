#include<iostream>
using namespace std;
int fibonnachi( int n){
    //int n;
   // cout<<" enter the value of n"<<endl;
   // cin >>n;
    int a=0;
    int b=1;
    cout<<a<<"\n"<<b<<"\n";
for (int i = 1; i <=n; i++)
{
  int nextnumber;
  nextnumber=a+b;
  cout<<nextnumber<<endl;
a=b;
b=nextnumber;  
}
   // return ;
    }
    int main(){
     int a;
     cout<<"enter the value of a till you want your fibbonacchi counting"<<endl;
     cin>>a;
     //function call

    fibonnachi(a);
    return 0;
}