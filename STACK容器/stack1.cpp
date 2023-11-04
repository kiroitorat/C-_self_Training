#include<iostream>
#include<stack>//栈容器，顺序是从下到上，上方是栈底，下方是栈顶，符合先进后出
//栈不允许遍历，只允许查看栈顶元素
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);//放入栈顶,此后每个加入栈的数据都会放在栈顶，之前的元素会被挤到栈底
    s.pop();//删除栈顶
    s.size();
    return 0;
}