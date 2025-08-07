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
        cout<<j<<" ";
     j=j+1;
    }
    cout<<endl;
    i=i+1;

}
}/*
1
1 2
1 2 3



*/