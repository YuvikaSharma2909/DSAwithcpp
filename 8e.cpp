#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of n"<<endl;
    cin >>n;
    bool is_prime=1;
  /*  if (n==0||n==1)
    {
        is_prime = 1;
    }*/
for (int i = 2; i < n; i++)
{
 if (n%i==0)
    {
        //cout<<"not a prime number"<<endl;
        is_prime=0;
        break;
    }
}
if (is_prime==0){
    cout<<"not a prime number"<<endl;
}
else
{
  cout<<" prime number"<<endl;
    }





}