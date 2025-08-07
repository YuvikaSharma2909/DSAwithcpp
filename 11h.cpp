// function for prime numberrr



#include<iostream>
using namespace std;
//1->prime no.
// 0->not a prime no.
bool isprime( int n){
    for (int i = 2; i <n ;i++)
    {
    if ( n%i==0)//mtlb divide ho gya hai
    {
    return 0;
    }    
}
     return 1;

}
int main(){
    int a;
    cin>>a;
   if( isprime(a)){
    cout<<"is a prime no.."<<endl;
   }else{
    cout<<"is not a prime no.."<<endl;

   }
   

}