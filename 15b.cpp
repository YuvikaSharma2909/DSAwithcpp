//bubble sort
#include <iostream>
using namespace std;
void bubblesort(int arr[],int size)
{
for (int i=0; i< size-1; i++)
{bool swapped=false;
for (int j=0; j<size-i-1; j++)
{
if (arr[j]>arr[j+1])
{
swap(arr[j],arr[j+1]);
swapped=true;
}
}
if (swapped==false)//a;ready sorted
{
    cout<<"array is already sorted in pass"<<i+1<<endl;
break;
}

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
bubblesort(arr,size);
cout<<"sorted array";
for( int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}