//says digits recursively

#include <iostream>
// #include<string>
using namespace std;
void saydigits(int n,string arr[]){
    // base case
    if (n==0)
    {
        return;
    }
    int digit = n%10;//get the last digit
    n=n/10;//remove the last digit
    saydigits(n,arr);//this means function will call itself until n becomes 0
    cout<<arr[digit]<<" "; //print the digit after returning from all recursive calls
}
int main(){
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"digits of "<<n<<" is "<<endl;
    saydigits(n,arr);
    return 0;

}