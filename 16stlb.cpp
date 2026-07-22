// std vector....
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; // syntax to create a vector
    cout<<"Capacity "<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"Capacity "<<v.capacity()<<endl;
    // capacity and size bpth are different concepts in vector . size is no of elements present in vector
    // capacity is total space allocated to vector
    cout<<"Size "<<v.size()<<endl;
    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"First element "<<v.front()<<endl;
    cout<<"Last element "<<v.back()<<endl;

    cout<<"Before poping "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    v.pop_back();

    cout<<"After poping "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"clearing the vector "<<endl;
    v.clear();
    cout<<"Size "<<v.size()<<endl;

return 0;
}
