#include<iostream>
using namespace std;
int pivotindex(int arr[],int size)
{
    for (int i = 0; i<size; i++)
    {
       if(arr[i]>arr[i+1]){
return arr[i+1];

    }
    }  
return 0;
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
 cout<<"peak index value : "<<pivotindex(arr,size)<<endl;;

}