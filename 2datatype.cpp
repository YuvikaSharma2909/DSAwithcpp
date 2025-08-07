#include<iostream> 
using namespace std;
int  main()
{

int a=2;
cout<< a << endl;

char ch='v';
cout<< ch<< endl;
//hence,we can't take variavles of same name .variable should be differnt 
//and meaningful name*if ch=a;

char b='r';
cout<< b << endl;

bool bl =true; // true for 1
//bool bl = false;//false for 0
cout<< bl << endl;

float f =1.2; 
cout<< f << endl;

double db=1.23;
cout<< db << endl;

//SIZE OF OPERATOR

int size;
size=sizeof(a);
cout<< "size="<< size << endl; 
// varible name can be changed.
//we can print any defined variable like a,b,bl,f,db....

//TYPE CASTING

/*int a = 'A';
cout<< a << endl;

char ch= 65;// use any number and it convert into a a sybol or character..
cout<< ch <<endl;*/

//imlicit or coversion

char grade='A';//
                //basically character is a small datatype and we are storing in big dattype like int
int value=grade;
cout<<value<<endl;

// explicit or casting

double price=100.99;

int newprice=(int)price; //we are typecasting our double value in int datatype
cout<<newprice<<endl;
//now our answer will be 100 because when we typecast into integer datatype it removes our decimal part

//ONLY FOR POSITIVE NUMBER WE USE UNSIGNED INT

//unsigned int a =123;
//cout<< a << endl;

//WE CAN'T USE UNSIGNED INT FOR NEGATIVE NUMBERS 

//unsigned int a = -123;
//cout<< a << endl;

// BY DEFAULT WE USE INT FOR POSITVE AND NEGATIVE NUMBERS 







    return 0;

}