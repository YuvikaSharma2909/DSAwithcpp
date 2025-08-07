#include<iostream> 
using namespace std;
int  main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int a,b,c;
    a=0;
    b=1;
    cout<<a<<" "<<b<<" ";
    int i=1;
    while (i<=n)
    {c=a+b;
cout<<c<<" ";
i++;
a=b;
b=c;
    }
    
return 0;
}
// fibbonacci series
