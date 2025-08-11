//total occurences of an element 
#include<iostream>
using namespace std;
int search(int arr[],int size,int key){
    int ans=0;
    for (int i = 0; i<size; i++)
    {
       if(arr[i]==key){
        ans++;
    }
    }  
return ans;
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
int result =search(arr,size,key);
cout<<"total occurences"<< result <<endl;


}
