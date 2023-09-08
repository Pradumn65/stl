// first in last out

#include<iostream>
#include<stack>
using namespace std;
  
int main()
{
    stack<string> s;
    s.push("pradumn");
    s.push("chauhan");
    s.push("rajput");

    cout<<"top element:  "<<s.top()<<endl;
    s.pop();
    cout<<"top element:  "<<s.top()<<endl;
    cout<<"size of stack:  "<<s.size()<<endl;
    cout<<"empty or not:  "<<s.empty()<<endl;
    return 0;
}