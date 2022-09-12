#include <iostream>
#include<queue>
using namespace std;
int main()
{
 priority_queue<int> p;  // 变量声明.
 p.push(10); // 插入 10 到队列, top=10
 p.push(30); // 插入 30 到队列, top=30
 p.push(20); // 插入 20 到队列, top=20
 cout<<"可用元素的数量 到 'p' :"<<p.size()<<endl;
 while(!p.empty())
 {
     cout << p.top() <<endl; 
     p.pop();
 }
 return 0;
}