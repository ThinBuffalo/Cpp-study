#include <bits/stdc++.h>
using namespace std;
int main()
{
    //栈
    /*
    1、栈(Stack)是一种线性存储结构，它具有如下特点：
    （1）栈中的数据元素遵守“先进后出"(First In Last Out)的原则，简称FILO结构。(后进先出的叫法，也是可以的）
    （2）限定只能在栈顶进行插入和删除操作。
    */
    stack<int> s; //定义栈，int可换为其他组成栈的类型
    s.empty();    //如果栈为空则返回true, 否则返回false;
    s.size();     //返回栈中元素的个数
    s.top();      //返回栈顶元素, 但不删除该元素
    s.pop();      //弹出栈顶元素, 但不返回其值
    s.push(1);    //将元素（参数）压入栈顶
    system("pause");
    return 0;
}