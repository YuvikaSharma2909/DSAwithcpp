//count digits in a number
#include <iostream>
using namespace std;
int countdigits(int n){
    // base case
    if (n==0)
    {
        return 0;
    }
    // int smallerproblem = countdigits(n/10);
    // int biggerproblem = 1+smallerproblem;
    // return biggerproblem;

    // or i can do more simply return 1+countdigits(n/10);
     return 1+countdigits(n/10); // recursive case

    }
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"number of digits in "<<n<<" is "<<countdigits(n)<<endl;
    return 0;
}
