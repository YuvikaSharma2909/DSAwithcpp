//linear search using recursion
#include <iostream>

using namespace std;
bool linearsearch(int arr[],int n,int key){
    // base case
    if (n==0)
    {
        return false;
    }
    if (arr[0]==key)
    {
        return true;
    }
    // recursive case
    bool remainingpart = linearsearch(arr+1,n-1,key);
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
    int key;
    cout<<"enter the key to search:"<<endl;
    cin>>key;
    bool found = linearsearch(arr,n,key);
    if (found)
    {
        cout<<"key found"<<endl;
    }
    else
    {
        cout<<"key not found"<<endl;
    }
    
    return 0;
}
