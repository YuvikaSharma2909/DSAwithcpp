//sum of an array using recursion
#include <iostream>
using namespace std;
int sumofarray(int arr[],int n){
    // base case
    if (n==0)
    {
        return 0;
    }
    // int smallerproblem = sumofarray(arr+1,n-1);
    // int biggerproblem = arr[0]+smallerproblem;
    // return biggerproblem;

    // or i can do more simply return arr[0]+sumofarray(arr+1,n-1);
     return arr[0]+sumofarray(arr+1,n-1); // recursive case
}
int main(){
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of array is "<<sumofarray(arr,n)<<endl;
    return 0;
}