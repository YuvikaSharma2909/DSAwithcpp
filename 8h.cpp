
#include<iostream>
using namespace std;
int main(){

   // QUESTION 1ST
for (int i = 0; i <= 5; i++)
{
    cout <<i<<" ";
    i++;
}

// QUESTION 2ND

/*for (int i = 0; i < 5; i++)
{
    for (int j = i; j <=5; j++)
    {
        cout<<i<<" "<<j<<endl;
    }
    
}
*/
//QUSTION 3RD
for (int i = 0; i < 5; i++)
{
    for (int j = i; j <=5; j++)
    { if (i+j==9)
    {
        break;
    }
    
        cout<<i<<" "<<j<<endl;
    }

}
//QUESTION 4TH
/*for (int i = 0; i <=5; i--)
{
    cout<<i<<" ";
    i++;
}*/
//QUESTION 5
for (int i = 0; i <=15; i+=2)
{
    cout<<i<<" ";
if (i&1)//here it is for checking odd codit
//


//
//also can use i%2!=0
{
    continue;
    
}
i++;// only runs when i is even
}












}








