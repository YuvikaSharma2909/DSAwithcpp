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
        char ch=('A' + i + j - 2);
        cout<<ch<<" ";
     j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}