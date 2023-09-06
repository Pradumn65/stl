#include<iostream>
#include<vector>
using namespace std;
  
int main()
{  
    vector<int> a;
    cout<<"capacity--->"<<a.capacity()<<endl;
    cout<<"size--->"<<a.size()<<endl;
    a.push_back(5);
    cout<<"capacity--->"<<a.capacity()<<endl;
    a.push_back(10);
    a.push_back(15);
     cout<<"size--->"<<a.size()<<endl;
    cout<<"capacity--->"<<a.capacity()<<endl;

    cout<<"element at second index: "<<a.at(2)<<endl;

    cout<<"front:  "<<a.front()<<endl;
    cout<<"back:  "<<a.back()<<endl;

    cout<<"before pop  "<<endl;
    for(int i:a)
    {
       cout<<i<<" ";
    }
    cout<<endl;
    a.pop_back();
    cout<<"after pop  "<<endl;
    for(int i:a)
    {
       cout<<i<<" ";
    }
    cout<<endl;

    vector<int>  b(a);
    for(int i:b)
    {
       cout<<i<<" ";
    }



    
    return 0;
}