#include<iostream> 
using namespace std;
int  main(){
int n;
cout<<"enter n:"<<endl;
cin>>n;
cout<<"value of  n is:"<<n<<endl;
//cout<<"hello";// till the perivious cant executetill this statement cant be executable

//NESTED IF STATEMENT
/*if( n>0){
    cout<<"n is positive number"<<endl;
}
else{
     if(n<0){
    cout<<"n is negative number"<<endl;
}
else {
    cout<<"n is neither negative or nor positive"<<endl;
}
}*/

//IF ELESE-IF
if( n>0){
    cout<<"n is positive number"<<endl;
}

   else if(n<0){
    cout<<"n is negative number"<<endl;
}
else {
    cout<<"n is 0 or 0 neither negative or nor positive"<<endl;
}
}

