//Binary search using recursion
#include <iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){
    // base case
    if (s>e)
    {
        return false; // key not found
    }
    // recursive case
    int mid=s+((e-s)/2); // to avoid overflow
    // int mid=(s+e)/2; // this can cause overflow if s and e are large
    //
    if (arr[mid]==key)// key is present at mid
    {
        return true; // key found
        // it can also return mid if we want to return the index of key
    }
    // if key is greater than mid, then it can only be present in right subarray
    if (arr[mid]<key) // key is present in right subarray
    {
        return binarysearch(arr,mid+1,e,key);// search in right subarray
        // start will be mid+1 because we have already checked mid
    }
    else // key is present in left subarray
    {
        return binarysearch(arr,s,mid-1,key);// search in left subarray
        // end will be mid-1 because we have already checked mid
    }
}
 


int main(){
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array in sorted order:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key to search:"<<endl;
    cin>>key; 
    // we can also return the index of key instead of true or false
    //here we need to return true or false because we are checking whether key is present in array or not and 
    //thats why we are using if condition to check whether key is present in array or not
    bool found = binarysearch(arr,0,n-1,key);
    if (found)
    {
        cout<<"key found"<<endl;// key is present in array
        // we can also print the index of key if we want to return the index of key
        
    }
    else
    {
        cout<<"key not found"<<endl;
    }
    
    return 0;
}
