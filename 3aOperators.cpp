
#include<iostream> 
using namespace std;
int  main(){

int a =2/5; // answer will be 0.4 normally but when we store our value in int a so it store as a integer...
cout<< a<<endl;
int b =2.0/5;  //since we divide float by integer ,so our answer will be float t is a integer because we store our value in int datatype..
cout<< b<<endl;
// now lets divide a nfloat by integer and don't store in int data type
cout<< 2.0/5<<endl;
/*hence,
int/int =int
float/int =float
double/int =double
*/

//RELATIONAL OPERATORS:
int x=2;
int y=4;
bool first=(x==y);//equals to lee ==
cout<<first <<endl;

bool second=(x<y);
cout<<second <<endl;

bool third=(x<=y);
cout<<third <<endl;

bool fourth=(x>y);
cout<<fourth <<endl;

bool fifth=(x>=y);
cout<<fifth <<endl;

bool sixth=(x!=y);
cout<<sixth <<endl;

bool seventh=(2*x==y);
cout<<seventh<<endl;


// LOGICAL OPERATORS

/*int a=32;
cout<< !a <<endl;

*/
    
    bool A = true;
    bool B = false;

    cout << "Logical Operators in C++" << endl;
    cout << "--------------------------" << endl;

    // AND operator (&&)
    cout << "A && B = " << (A && B) << endl;  // false

    // OR operator (||)
    cout << "A || B = " << (A || B) << endl;  // true

    // NOT operator (!)
    cout << "!A = " << (!A) << endl;          // false
    cout << "!B = " << (!B) << endl;          // true

    return 0;
}
