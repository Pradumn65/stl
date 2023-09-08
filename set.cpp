// set is data structure in  which uniqe element is store in sorted order
// modification is not possible in set

#include<iostream>
#include<set>
using namespace std;
  
int main()
{
    set<int> s;
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(8);
    s.insert(9);

    for(auto it:s)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    s.erase(it);
    for(auto it:s)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"6 is present or not: "<<s.count(6)<<endl;
    set<int>::iterator itr=s.find(6);
    for(auto it=itr;it!=s.end();it++)
    {
      cout<<*it<<" "; 
    }
    cout<<endl;


    return 0;
}