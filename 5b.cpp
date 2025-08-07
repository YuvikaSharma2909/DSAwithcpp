#include<iostream> 
using namespace std;
int  main(){
int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
int i=1,sum =0;
while (i<=n)
{
 sum=sum+i;
 i=i+1;
}
cout<<" the sum is ="<<sum<<endl;
return 0;
}
//printing sum from 1 to n...