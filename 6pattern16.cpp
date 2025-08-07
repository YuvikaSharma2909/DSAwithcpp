#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:";
cin>>n;
int i=0;//i row
while (i<=n)
{
    int j=0;//j =coloumn
    while (j<=n)
    {
        char ch='A'+i;
        //type cas\ting rule
        cout<<ch<<" ";
     j=j+1;
    }
    cout<<endl;
    i=i+1;

}
}/*
 A B C 
 B C D
 C D E



*/