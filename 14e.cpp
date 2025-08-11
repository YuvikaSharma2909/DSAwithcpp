#include<iostream>
using namespace std;
int peakindex(int arr[],int size)
{
    for (int i = 0; i<size; i++)
    {
       if(arr[i]>arr[i+1]){
return arr[i];

    }
    }  
return -1;
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
 cout<<"peak index value : "<<peakindex(arr,size)<<endl;;

}