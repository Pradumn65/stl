// direct excess is not possible in list( like array, vector,deque using at() function)
// list is implemented using doubly link list

#include<iostream>
#include<list>
using namespace std;
  
int main()
{
    list<int> l;
    l.push_back(12);
    l.push_front(5);

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }

    return 0;
}