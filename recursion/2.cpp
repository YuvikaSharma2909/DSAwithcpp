//2^n recursive function 
#include <iostream> 
using namespace std;
int power(int n){
    // base case
    if (n==0)
    {
        return 1;
    }
    // int smallerproblem = power(n-1);
    // int biggerproblem = 2*smallerproblem;
    // return biggerproblem;

    // or i can do more simply return 2*power(n-1);
     return 2*power(n-1); // recursive case


    
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"2^"<<n<<" is "<<power(n)<<endl;
    return 0;
}