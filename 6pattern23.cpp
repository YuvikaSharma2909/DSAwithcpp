#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int row=1;//i
while (row<=n)
{ int space=n-row;
while (space)
{
cout<<" ";
space=space-1;
}

    int col=1;//j
    while (col<=row){
        cout<<"*";

     col=col+1;
    }
    cout<<endl;
    row=row+1;
}
}