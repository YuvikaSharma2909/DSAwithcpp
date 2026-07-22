// is sorted array 
#include <iostream>
using namespace std;
bool issorted(int arr[],int n) //n=size of array
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
    bool remainingpart = issorted(arr+1,n-1);
    return remainingpart;

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