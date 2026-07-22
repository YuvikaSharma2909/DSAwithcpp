// reach home example from sorce to destination using recursion
#include <iostream>
using namespace std;
void reachhome(int src,int dest){
    cout<<"source: "<<src<<" destination: "<<dest<<endl;
    // base case
    if (src==dest)
    {
        cout<<"reached home"<<endl;
        return;
    }
    // processing
    src++;
    // recursive call
    reachhome(src,dest)
    ;
}
int main(){
    int src,dest;
    cout<<"enter the value of source and destination:"<<endl;
    cin>>src>>dest;
    reachhome(src,dest);
    return 0;
}