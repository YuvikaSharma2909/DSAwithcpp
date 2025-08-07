#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int i=1;
while (i<=n)
{
int j=1;
while (j<=n-i+1)
{
    cout<<j;
    j=j+1;
}
//3nd triangle print karlo
j=1;
while (j<=(i-1)*2)
{
    cout<<"*";
    j=j+1;
}
j=n-i+1;
while (j>=1)
{
    cout<<j;
    j=j-1;
}
cout<<endl;
i=i+1;
}















}