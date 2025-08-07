//array with functions....
#include<iostream>
using namespace std;

void printarray(int arr[],int size){
 cout<<"printing the array"<<endl;
 //print the array
 for (int i = 0; i < size; i++)
 {
cout<<arr[i]<<" ";
 }

}


int main(){
int second[3]={ 5,6,7};
 printarray( second,3);

int third[15]={2,5};
 printarray( third,15);
int thirdsize=sizeof(third)/sizeof(int);
cout<<"size of third is :"<<thirdsize<<endl;
//ab0ve print array funvtion is only for integer type
char ch[5]={'a','b','c','d','e'};
cout<< ch[3]<<endl;

 cout<<"printing the array"<<endl;
 //print the array
 for (int i = 0; i <5; i++)
 {
cout<<ch[i]<<" ";
 }

 //same for dpuble,bol,floaaaaaaat










}
