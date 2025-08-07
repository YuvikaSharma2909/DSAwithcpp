#include<iostream>
using namespace std;
int search(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid]<=key)
        
        {
        start=mid+1;
        }
        
        if (arr[mid]>=key)
        
        {
        end=mid-1;
        }
        mid=start+((end-start)/2);
    }
// return false;
return -1;
}
int main(){
int size;
cin>>size;
    int arr[100];
cout<<"enter "<<size <<"elements "<<endl;
for( int i=0;i<size;i++){
    cin>>arr[i];
}
// whether 1 is present in array
cout<<"enter the key that you want to search:"<<endl;
int key;
cin>>key;
int index=search(arr,size,key);
if(index!=-1){
cout<<"key is present at index :"<< index<<endl;
}

else{
    cout<<"key is not present"<<endl;
}
return 0;
}