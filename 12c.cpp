#include<iostream>
#include <climits>
using namespace std;
int getmax( int arr[],int n){
int max=INT_MIN;
for(int i=0;i<n;i++)
{
    if (arr[i]>max){
    max=arr[i];
} }
return max;
}
int getmin( int arr[],int n){
int mini=INT_MAX;
for(int i=0;i<n;i++)
{
    mini=min(mini,arr[i]);//use this functionto get max or min
   // if (arr[i]<min){
    //min=arr[i];
 }
return mini;
}

int main(){
    int size;
    cout<<"the number for elements"<<endl;
    cin>>size;
    cout<<"the input value  is :";

    int arr[100];
    for (int i=0; i <size; i++)
    {
        //taking input in array
        cin>>arr[i];}

        cout<<"maximum number is:"<<getmax(arr,size)<<endl;
        cout<<"minimum number is:"<<getmin(arr,size)<<endl;

    return 0;  

}


