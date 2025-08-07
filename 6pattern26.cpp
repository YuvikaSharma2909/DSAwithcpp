#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int i=1;//i
while (i<=n)
// space print karlo
{
     int space=n-i;
while (space)
{
cout<<" ";
space=space-1;
}
//1st triangle print karlo
    int j=1;//j
    while (j<=i)
    {
        cout<<j;
     j=j+1;
    }
//2nd triangle print karlo
int start=i-1;
while (start)
{
    cout<<start;
    start=start-1;
}

    cout<<endl;
    i=i+1;
}
}
/*

   1
  121
 12321
1234321




*/










