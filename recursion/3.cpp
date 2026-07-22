// now we print the counting
#include <iostream>
using namespace std;
void count(int n){
         if (n==0)
    {
        return;
    }
    count(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    cout<<"counting from 1 to "<<n<<" is "<<endl;
    count(n);
    return 0;
}