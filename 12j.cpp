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
int i=0;
while (i<size-1)
{
    swap(arr[i],arr[i+1]);
    i+=2;
}
cout<<"array after swapping"<<endl;
for( int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    
}
cout<<endl;
return 0;
}


