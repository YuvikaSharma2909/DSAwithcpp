#include<iostream>
using namespace std;
int main(){
    int marks;
cout<<"enter the marks:"<<endl;
cin>>marks;
if (marks>=90){
    cout<<"A"<<endl;
    }
else if (marks>=70&& marks<=90)
{
    cout<<"B"<<endl;    
}
else if (marks>=50&&marks<=70)
{
    cout<<"c"<<endl;
}
else
{
    cout<<"D"<<endl;   
}
    return 0;
}