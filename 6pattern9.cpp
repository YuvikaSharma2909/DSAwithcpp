#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int i=1;//i row
int count=1;
while (i<=n)
{
    int j=1;//j =coloumn
    while (j<=i)
    {
        cout<<count;
        count=count+1;
     j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}
/*
 1
 2 3
 4 5 6 


*/