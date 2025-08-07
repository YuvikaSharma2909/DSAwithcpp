#include<iostream>
using namespace std;
int main(){
int amount;
cout<<"enter th money amount"<<endl;
cin>>amount;
int note100=0,note50=0,note20=0,note10=0,coin5=0,coin2=0,coin1=0;
int choice=1;
while (amount>0)
{
    switch (choice) {
            case 1:
                note100 = amount / 100;
                amount %= 100;
                break;
            case 2:
                note50 = amount / 50;
                amount %= 50;
                break;
            case 3:
                note20 = amount / 20;
                amount %= 20;
                break;
            case 4:
                note10 = amount / 10;
                amount %= 10;
                break;
            case 5:
                coin5 = amount / 5;
                 amount %= 5;
                break;
            case 6:
                coin2 = amount / 2;
                amount %= 2;
                break;
            case 7:
                coin1 = amount/1;
                amount = 0;
                break;
        }
        choice++;
    }

    // Output result
    cout << "Notes and Coins required:\n";
    cout << "100 Rs notes: " << note100 << endl;
    cout << "50 Rs notes : " << note50 << endl;
    cout << "20 Rs notes : " << note20 << endl;
    cout << "10 Rs notes : " << note10 << endl;
    cout << "5 Rs coins  : " << coin5 << endl;
    cout << "2 Rs coins  : " << coin2 << endl;
    cout << "1 Rs coins  : " << coin1 <<endl;

return 0;

}