#include<iostream>
using namespace std;
int pivotelement(int arr[],int size){
    int start=0;
    int end=size-1;
    while (start<end)
    {
          int mid=start+((end-start)/2);
        if (arr[mid]>=arr[0
        ])
        {
        
            start=mid+1;
        }
        else
         {
            end=mid;
         }
         
    }
return start;
}
  int main(){
        //yeh sab to mein array input ke liye use krti hu
int size;
cin>>size;
    int arr[100];
cout<<"enter "<<size <<"elements "<<endl;
for( int i=0;i<size;i++){
    cin>>arr[i];
}
 cout<<"pivot value : "<<pivotelement(arr,size)<<endl;}