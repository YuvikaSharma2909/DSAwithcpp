#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
for (int a=1,b=2,c=3; a<=n, b<=n,c<=n;++a,++b,++c)
// in this all conditions are seprated by commas,so
// loop take only one condition (c<=n)and if we provide a n=1
// so it doesn't march the condition so there is no OUTPUT
{
    cout<<a<<" "<<b<<" "<<c<<" "<< endl;
}
    return 0;
}
//using for loop for multiple variable at a same time 