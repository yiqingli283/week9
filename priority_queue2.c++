#include <iostream>
#include<queue>
using namespace std;
int main()
{
   priority_queue<int> p;  //优先队列声明
   priority_queue<int> q;  //优先队列声明
   p.push(1); // 插入 '1' 到 p.
   p.push(2); // 插入 '2' 到 p.
   p.push(3); // 插入 '3' 到 p.
   p.push(4); // 插入 '4' 到 p.
   q.push(5); // 插入 '5' 到 q.
   q.push(6); // 插入 '6' 到 q.
   q.push(7); // 插入 '7' 到 q.
   q.push(8); // 插入 '8' 到 q.
   p.swap(q);
   cout << "p队列元素是 : " <<endl;
   while(!p.empty())
   {
      cout << p.top() <<endl;
       p.pop();
   }
   cout << "q优先队列元素是 :" <<endl;
    while(!q.empty())
   {
     cout << q.top() <<endl;
       q.pop();
   }
    return 0;
}