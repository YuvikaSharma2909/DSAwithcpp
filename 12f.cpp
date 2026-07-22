
#include<iostream>
using namespace std;

void reversearray(int arr[],int size,int m){
int start=m+1;
int end=size-1;
 while (start<end)
 {
swap(arr[start],arr[end]);
  start++;
  end--;
 }

 }
 void printarray(int arr[],int size){
 for (int i = 0; i < size; i++)
 {
    cout<<arr[i]<<" ";
 }
 
cout<<endl;
 }

int main()
{
int size;
cin>>size;

    int arr[100];
cout<<"enter "<<size <<"elements "<<endl;
for( int i=0;i<size;i++){
    cin>>arr[i];
}
int m;
cin>>m;
reversearray(arr,size,m);
printarray(arr,size);

}
