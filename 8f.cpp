//FIBONACCI SERIES
/*
0 1 1 2 3 5 8 -------
basicaly we need to add just these number in a sequence.....
just add previous two numbers and get a new number.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n"<<endl;
    cin >>n;
    int a=0;
    int b=1;
    cout<<a<<"\n"<<b<<"\n";
for (int i = 1; i <=n; i++)
{
  int nextnumber;
  nextnumber=a+b;
  cout<<nextnumber<<endl;
a=b;
b=nextnumber;  
}
    return 0;

    }