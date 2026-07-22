//lets start recursion
//recursion is a programming technique where a function calls itself in order to solve a problem. It typically involves a base case that stops the recursion and a recursive case that breaks the problem into smaller subproblems.
#include <iostream>
using namespace std;
int factorial( int n){
    if (n == 0 )
    {
        return 1;
    }
        return n*factorial(n-1);
    //  int smallerproblem= factorial(n-1);
    //  int biggerproblem= n*smallerproblem;
    //     return biggerproblem;
        // or i can do more simply return n*factorial(n-1);
        // also use else statement but it is not necessary because of return statement

    
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}