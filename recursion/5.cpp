// fibonacci series using recursion
#include <iostream>
using namespace std;
int fibonacci(int n){
    // base case
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    // int smallerproblem1 = fibonacci(n-1);
    // int smallerproblem2 = fibonacci(n-2);
    // int biggerproblem = smallerproblem1 + smallerproblem2;
    // return biggerproblem;

    // or i can do more simply return fibonacci(n-1) + fibonacci(n-2);
     return fibonacci(n-1) + fibonacci(n-2); // recursive case
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"fibonacci of "<<n<<" is "<<fibonacci(n)<<endl;
    return 0;
}