//checking is sorted array but in both ascending and descending order
#include <iostream>
using namespace std;
//so we will check for both ascending and descending order
//we create two functions one for ascending and one for descending order
//so when we call sorted function it will check ascending order and descending order and return true if any of them is true

bool issortedasc(int arr[],int n) //n=size of array             
{
    // base case
    if (n==0 || n==1)
    {
        return true;
    }
    // processing
    if (arr[0]>arr[1])
    {
        return false;
    }
    // recursive case
    bool remainingpart = issortedasc(arr+1,n-1);
    return remainingpart;
}
bool issorteddsc(int arr[],int n) //n=size of array             
{
    // base case
    if (n==0 || n==1)
    {
        return true;
    }
    // processing
    if (arr[0]<arr[1])
    {
        return false;
    }
    // recursive case
    bool remainingpart = issorteddsc(arr+1,n-1);
    return remainingpart;
}
bool issorted(int arr[],int n){
    return issortedasc(arr,n) || issorteddsc(arr,n);
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
    if (issorted(arr,n))
    {
        cout<<"array is sorted"<<endl;
    }
    else
    {
        cout<<"array is not sorted"<<endl;
    }
    
    return 0;
}