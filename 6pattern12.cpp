#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int i=1;//i row
while (i<=n)
{
    int j=1;//j =coloumn
    while (j<=i)
    {
        cout<<(i-j+1)<<" ";
     j=j+1;
    }
    cout<<endl;
    i=i+1;

}
}
/*
 1
 2 1
 3 2 1
//we can also initialize a variable vale=i...
and then print the value and start decreement val--


*/