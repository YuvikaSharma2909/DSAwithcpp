//insertion sort
#include <iostream>
using namespace std;
 int insertionsort(int arr[] ,int size){










 }




int main(){
int size;
cin>>size;
    int arr[100];
cout<<"enter "<<size <<"elements "<<endl;
for( int i=0;i<size;i++){
    cin>>arr[i];
}
insertionsort(arr,size);
cout<<"sorted array";
for( int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}