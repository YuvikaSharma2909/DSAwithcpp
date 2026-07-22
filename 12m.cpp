// move all zeros to end of array
#include<iostream>
using namespace std;
void movezeros(int arr[],int size){
    int j=0;
for (int i = 0; i < size; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
       
        
    }
}
 void printarray(int arr[],int size){
 for (int i = 0; i < size; i++)
 {
    cout<<arr[i]<<" ";
 }
 
cout<<endl;
 }
int main(){
    int size;
    cin>>size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    movezeros(arr,size);
    printarray(arr,size);}