#include<iostream>
using namespace std;
int factorial(){
    int n;
    cin>>n;
    int fact =1;
    int i=1;
    while(i<=n){
fact=fact*i;
i++;
    }
    return fact;
}
int main(){
    cout<<"the factorial of a number is: "<<factorial()<<endl;
}