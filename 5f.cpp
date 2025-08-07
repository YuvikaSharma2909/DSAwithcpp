#include<iostream> 
using namespace std;
int  main(){
int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
int i=1,factorial =1;
while (i<=n)
{
 factorial=factorial*i;
 i=i+1;
}
cout<<" the factorial is ="<<factorial<<endl;
return 0;
}
//printing factorial from 1 to n...