// count ways to reach the nth stair
#include <iostream>
using namespace std;
int countways(int n){
    // base case
    if (n==0)
    {
        return 1;
    }
    if (n<0)
    {
        return 0;
    }
    // int smallerproblem1 = countways(n-1);
    // int smallerproblem2 = countways(n-2);
    // int biggerproblem = smallerproblem1 + smallerproblem2;
    // return biggerproblem;

    // or i can do more simply return countways(n-1) + countways(n-2);
     return countways(n-1) + countways(n-2); // recursive case
}   
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"number of ways to reach "<<n<<"th stair is "<<countways(n)<<endl;
    return 0;
}