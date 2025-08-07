// <<<<<ARRAY SCOPE>>>>>>>>
#include<iostream>
using namespace std;
 void update( int arr[],int n){
    cout<<" inside the function"<<endl;
arr[0]=120;
for( int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<" going back to main function "<<endl;
 }
 

int main(){
    int arr[3]={1,2,3};
    update( arr,3);
cout<<" printing in main function "<<endl;
for( int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}


}
//pass by value or pass by refrence concept is clear