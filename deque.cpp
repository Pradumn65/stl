// doubly ended que--> a data structure in which we perform insertion deletion from both side (that is end and begining)

#include<iostream>
#include<deque>
using namespace std;
  
int main()
{
    deque<int> d;
    d.push_back(5);
    d.push_front(2);

    // random exccess
    cout<<"first index element: "<<d.at(1)<<endl;

    cout<<"front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;

    cout<<" empty or not:  "<<d.empty()<<endl;

    cout<<"size before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"size after erase: "<<d.size()<<endl;

    for(int i:d)
    {
        cout<<i<<" ";
    }

    return 0;
}