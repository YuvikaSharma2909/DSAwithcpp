#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[100];
cout<<"enter "<<size <<"elements "<<endl;
for( int i=0;i<size;i++){
    cin>>arr[i];
}
    int sum=0;
   // int arr[5]={4,8,9,6,2};
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
        //cout<<sum<<endl;
    }
        cout<<sum<<endl;
    
}
