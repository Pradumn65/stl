// queue->first in first out

#include<iostream>
#include<queue>
using namespace std;
  
int main()
{
    queue<string> q;
    q.push("pradumn");
    q.push("chauhan");
    q.push("rajput");

    cout<<"size before pop: "<<q.size()<<endl;
    cout<<"first element: "<<q.front()<<endl;
    q.pop();
    cout<<"first element: "<<q.front()<<endl;
    cout<<"size after pop: "<<q.size()<<endl;
       


    return 0;
}