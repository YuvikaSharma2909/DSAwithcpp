#include<iostream>
using namespace std;
//here n is a copy variable
void dummy(int n){
    n++;
cout<<"n is "<<n<<endl;
}
int main(){
    int a;// a is a real value
    
    cin>>a;
    dummy(a);
cout<<" number n is "<<a<<endl;
    
}