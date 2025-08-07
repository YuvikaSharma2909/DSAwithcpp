#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[100];
cout<<"enter "<<size <<"elements "<<endl;
for( int i=0;i<size;i++){
    cin>>arr[i];
}
int counteven=0;
int countodd=0;

for( int i=0;i<size;i++){
if (arr[i]%2==0)
{
    counteven++;
}
else
{
    countodd++;
}
}
cout<< "even numbers in array are:"<<counteven<<endl;
cout<<" odd numbers in array are:"<<countodd<<endl;

}