// merge two sorted arrays into a single sorted array
#include<iostream>
using namespace std;
void mergearrays(int arr1[],int size1,int arr2[],int size2,int merged[]){
    int i=0; //pointer for arr1
    int j=0; //pointer for arr2
    int k=0; //pointer for merged array
    while (i<size1 && j<size2)
    {
        if (arr1[i]<arr2[j])
        {
            merged[k]=arr1[i];
            i++;
            k++;
        }
        else{
            merged[k]=arr2[j];
            j++;
            k++;
        }
        
    }
    //copy remaining elements of arr1
    while (i<size1)
    {
        merged[k]=arr1[i];
        i++;
        k++;
    }
    //copy remaining elements of arr2
    while (j<size2)
    {
        merged[k]=arr2[j];
        j++;
        k++;
    }
}
    
void printarray( int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int n1;
    cout<<" enter size of first array:"<<endl;
    cin>>n1;
    int arr1[100];
    cout<<" enter "<<n1<<" elements "<<endl;
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }

    int n2;
    cout<<" enter size of second array:"<<endl;
    cin>>n2;
    int arr2[100];
    cout<<" enter "<<n2<<" elements "<<endl;
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }

    int merged[200];
    mergearrays(arr1,n1,arr2,n2,merged);
    cout<<" merged array is :"<<endl;
    printarray(merged,n1+n2);

    return 0;
}