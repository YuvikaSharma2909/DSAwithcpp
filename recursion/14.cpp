//reversing a string using recursion
#include <iostream>
using namespace std;
void reversestring(string str,int index){
    // base case
    if (index==str.length())
    {
        return;
    }
    // recursive case
    reversestring(str,index+1);
    cout<<str[index];
}
int main(){
    string str;
    cout<<"enter the string:"<<endl;
    cin>>str;
    cout<<"reversed string is "<<endl;
    reversestring(str,0);
    cout<<endl;
    return 0;
}
