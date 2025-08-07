#include<iostream>
using namespace std;
//1-->even
//2-->odd
bool isEven(int a){
    //check odd
    if(a%2==0){// if last bit is 1
    //it is odd
        return 1;//even
    }
    else{ //if last bit is 0
        return 0;// it's even//now odd
    }
}
int main(){
    int num;
    cin>>num;//enter input from the user
if(isEven(num)){
    cout<<"number is even"<<endl;
}
else{
    cout<<"number is odd "<<endl;
}

}