

#include<iostream>
#include<map>
using namespace std;
  
int main()
{
    map<int,string> m;
    m[1]="pradumn";
    m[2]="nagesh";
    m[3]="shubham";

    m.insert({5,"ankit"});
    cout<<"before erase  "<<endl;
    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }

 
    cout<<"find 5: "<<m.count(5)<<endl;

    m.erase(3);
    cout<<"after erase  "<<endl;
    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
     cout<<"find  "<<endl;
    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }


    return 0;
}