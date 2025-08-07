#include<iostream>
using namespace std;
int main(){
//DECLARARATION
int  number[15];


//ACCESSING AN ARRAY ELEMENT
cout<<" value at 15 index is"<<number[14]<<endl;

//INITIALIZE AN ARRAY
int second[3]={2,4,7};
//ACCESSING
cout<<" value at 3 index is"<<second[2]<<endl;

int third[15] ={2,7,8};
int n = 2;
cout<<" printing the array"<<endl;
//print he array
for (int i = 0; i <=n; i++)
{
    cout <<third[i]<<" ";
}

//INITALIZING ARRAY WITH ZERO
int fourth[15]={0};
 n = 14;
cout<<" printing the array"<<endl;
//print he array
for (int i = 0; i <=n; i++)
{
    cout <<fourth[i]<<" ";
}

// INITIALIZING ARRAY WITH 1 IS NOT POSSIBLE
int fifth[10] ={1};
 n = 10;
cout<<" printing the array"<<endl;
//print he array
for (int i = 0; i <=n; i++)
{
    cout <<fifth[i]<<" ";
}




return 0;
}