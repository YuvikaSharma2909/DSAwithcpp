//selection sort
#include <iostream>
using namespace std;
void selectionsort(int arr[],int size)
{
for (int i=0; i<= size-1; i++)
{
int minindex=i;
for (int j=i+1; j<size; j++)
{
if (arr[j]<arr[minindex])
{
    minindex=j;
}
}
swap(arr[minindex],arr[i]);
}

}

int main(){
int size;
cin>>size;
    int arr[100];
cout<<"enter "<<size <<"elements "<<endl;
for( int i=0;i<size;i++){
    cin>>arr[i];
}
selectionsort(arr,size);
cout<<"sorted array";
for( int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
