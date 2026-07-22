// sum of digits of a number using recursion
#include <iostream>
using namespace std;
int sumofdigits(int n){
    if (n==0)
    {
        return 0;
   }
    // int smallerproblem = sumofdigits(n/10);
    // int biggerproblem = n%10 + smallerproblem;
    // return biggerproblem;

    // or i can do more simply return n%10 + sumofdigits(n/10);
     return n%10 + sumofdigits(n/10); // recursive case


}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"sum of digits of "<<n<<" is "<<sumofdigits(n)<<endl;
    return 0;
}