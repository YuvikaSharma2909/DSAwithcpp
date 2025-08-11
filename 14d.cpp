#include<iostream>
using namespace std;
int firstoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    int ans=-1;//ans ko -1 se isliye store kra rhi hu kyuki wo question mein given hai
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            //ans mein isliye store kra rhi hu kyuki ho sakta first coocurence mid se pehle aa rha ho
             ans=mid;
            end=mid-1;
        }
         else if (arr[mid]<key)
        
        {
        start=mid+1;
        }
        
        else if (arr[mid]>key)
        
        {
        end=mid-1;
        }
        mid=start+((end-start)/2);
    }
return ans;
}
int lastoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    int ans=-1;//ans ko -1 se isliye store kra rhi hu kyuki wo question mein given hai
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            //ans mein isliye store kra rhi hu kyuki ho sakta first coocurence mid se pehle aa rha ho
             ans=mid;
            start=mid+1;
        }
         else if (arr[mid]<key)
        
        {
        start=mid+1;
        }
        
        else if (arr[mid]>key)
        
        {
        end=mid-1;
        }
        mid=start+((end-start)/2);
    }
return ans;
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
// whether 1 is present in array
cout<<"enter the key that you want to search:"<<endl;
int key;
cin>>key;

int first =firstoccurence(arr,size,key);
cout<<"first occurence of element is at index :" << first <<endl;

int last =lastoccurence(arr,size,key);
cout<<" last occurence of element is at index :" << last <<endl;
 
 int total=(last-first)+1;
cout<<"total occurences of element  :" << total<<endl;
 
 
 
     }