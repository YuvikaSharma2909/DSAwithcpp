#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int i=1;
char ch ='A';//i row
while (i<=n)
{
    int j=1;//j =coloumn
    while (j<=i)
    {
        cout<<ch<<" ";
        ch=ch+1;
     j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}
/*
A
B C 
D E F


*/