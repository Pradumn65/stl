#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
  
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);

    cout<<"is 4 present:  "<<binary_search(v.begin(),v.end(),4)<<endl;
    int a=4;
    int b=7;
    cout<<"maximum:  "<<max(a,b)<<endl;
    cout<<"minimum:  "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    string s="abcdef";
    reverse(s.begin(),s.end());
    cout<<"string: "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"after sort"<<endl;

    for(auto i:v)
    {
        cout<<i<<" ";
    }

    return 0;
}