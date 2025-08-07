#include<iostream> 
using namespace std;
int  main(){
int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
for (int i=2; i<=n; i+=2)
{
    cout<<i<<" ";
}
return 0;
}