#include<iostream> 
using namespace std;
int  main(){
int n,range;
cout<<"enter the value of n:"<<endl;
cin>>n;
cout<<"enter the value of range:"<<endl;
cin>>range;
int i =1;
while (i<=range)//default range of any number is 10,but if we want to that our range is not limited then we use a third variable"range"
{
    cout<<n<<"*"<<i<<"="<< n*i<<endl;
    i=i+1;
}
return 0;
}
//for printing a table..