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
    int val=i;//a value which always strt with a row number
    while (j<=i)
    {
        cout<<val<<" ";
       val=val+1;//now we can increase our value by 1 so we get oyr next number
     j=j+1;
    }
    cout<<endl;
    i=i+1;

}
}/*
1 
2 3 
3 4 5



*/