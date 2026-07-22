// sum of first natural numbers using recursion
#include <iostream>
using namespace std;
int sum(int n){
    // base case
    if (n==0)
    {
        return 0;
    }
    // int smallerproblem = sum(n-1);
    // int biggerproblem = n+smallerproblem;
    // return biggerproblem;

    // or i can do more simply return n+sum(n-1);
     return n+sum(n-1); // recursive case

    
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"sum of first "<<n<<" natural numbers is "<<sum(n)<<endl;
    return 0;
} 