#include<iostream> 
using namespace std;
int  main(){
    char ch ;
    cout<<"enter a letter :";
    cin>>ch;
    if (ch>='A'&& ch<='Z')
    {
        cout<<"letters are in upper case";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"letters are in lower case";
    }
    else if (ch >= '0'&& ch<='9')
    {
        cout<<"thse are digits";
        
    }
    
    
    
    
    
    
}



