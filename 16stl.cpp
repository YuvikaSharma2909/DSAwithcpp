#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,5> a={1,2,3,4,5};
    int size=a.size();
    cout<<"Size of array is "<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"element at 2nd index is "<<a.at(2)<<endl;
    cout<<get<3>(a)<<endl; // it will give 4th index element
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;
    cout<<"Before filling "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    a.fill(10);
    cout<<"After filling "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}