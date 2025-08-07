#include<iostream> 
using namespace std;
int  main(){
int n;
int sum=0;
cout<<"enter the value of n:"<<endl;
cin>>n;
for (int i=2; i<=n; i+=2)
{
    sum=sum+i;
}
    cout<<sum<<" ";
return 0;
}