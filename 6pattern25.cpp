#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int row=1;//i
while (row<=n)
{ int space=row-1;
while (space)
{
cout<<" ";
space=space-1;
}

   int col=1;//j
    while (col<= n - row +1){
        cout<<"*";
     col=col+1;
    }
    cout<<endl;
    row=row+1;
}
}
