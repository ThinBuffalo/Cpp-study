#include <bits/stdc++.h>
using namespace std;
int main()
{
    //队列
    /*
    1、队列（Queue）与栈一样，是一种线性存储结构，它具有如下特点：
    （1）队列中的数据元素遵循“先进先出”（First In First Out）的原则，简称FIFO结构；
    （2）在队尾添加元素，在队头删除元素。
    5、实例分析
      a、栈空： 队首标志=队尾标志时，表示栈空。
      b、栈满 : 队尾+1 == 队首时，表示栈满。
    */
    queue<int> q;
    q.empty(); //如果队列为空返回true，否则返回false
    q.size();  //返回队列中元素的个数
    q.pop();   //删除队列首元素但不返回其值
    q.front(); //返回队首元素的值，但不删除该元素
    q.push(1);  //在队尾压入新元素
    q.back();  //返回队列尾元素的值，但不删除该元素
    system("pause");
    return 0;
}
