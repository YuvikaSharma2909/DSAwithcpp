#include<iostream>
using namespace std;
//basic program
/*
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int count=0;
    while (n>0){
    if(n&1){
    
    count++;
    }
    n=n>>1;
    }
    cout<<"no of set bits"<<count<<endl;
    return 0;
    
}*/
int setbit(int n){
int count=0;
while (n>0)
{
    if (n&1)
    {
        count++;
    }
    n=n>>1;
}
return count;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int count=setbit(a)+setbit(b);
    cout<<count<<endl;
}






















