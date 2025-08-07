#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[100];
cout<<"enter "<<size <<"elements "<<endl;
for( int i=0;i<size;i++){
    cin>>arr[i];
}
int max=INT_MIN;
for(int i=0;i<size;i++)
{
    if (arr[i]>max){
    max=arr[i];
} }
int secondmax=INT_MIN;
for(int i=0;i<size;i++)
{
    if (arr[i]!=max&&arr[i]>secondmax){
        secondmax=arr[i];
}}
if(secondmax==INT_MIN){
    cout<<" no secondmax exists"<<endl;
}
else{
cout<<secondmax<<endl;
}

}