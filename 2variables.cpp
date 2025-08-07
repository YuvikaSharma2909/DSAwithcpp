//VARIABLES
//containers to store the data
#include<iostream>
using namespace std;
int main()
{
int a;
a=8;// initializing global variable....
cout <<a <<endl;
if(true){
    int a=5; // initializing local variable
cout <<a <<endl;
}
cout <<a <<endl;

// the value of variable inside a block is not valid for out of the loop
// we can't redefine a variable out of the loop

}