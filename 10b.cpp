#include<iostream>
using namespace std;
int main() {

int a,b;
cout<<"enter the value of a :";
cin>>a;
cout<<"enter the value of b:";
cin>>b;
char op;
cout<<"enter the operation:";
cin>>op;
switch (op)
{
case '+': cout<<"sum of a and b is"<<(a+b)<<endl;
    break;
case '-': cout<<"difference of a and b is"<<(a-b)<<endl;
    break;

case '*': cout<<"product of a and b is"<<(a*b)<<endl;
    break;

case '%': cout<<"division of a and b is"<<(a%b)<<endl;
    break;
   
    case '/': cout<<"division of a and b is"<<(a/b)<<endl;
    break;

default:cout<<"do nothing"<<endl;
    break;
}


}