#include<iostream>

struct Node
{
    int data;
    struct Node* next;
};

struct MyStack
{
    struct Node* Top;
    int size;
};

struct Node* createNode(int val)
{
    struct Node* newNode = new struct Node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

struct MyStack* createStack()
{
    struct MyStack* newStack = new struct MyStack();
    return newStack;
}

void push(struct MyStack &s , int newVal)
{
    struct Node* newNode = createNode(newVal);
    newNode->next = s.Top;
    s.Top = newNode;
    s.size++;
}

void pop(struct MyStack &s)
{
    if (s.size==0)
    {
        std::cout<<"是空的喵";
        return;
    }else
    {
        struct Node* newNode = s.Top->next;//这里一定要保存栈顶的下一个元素
        delete s.Top;//原因就是当你删除了栈顶后，如果拷贝栈顶的下一个元素，那么你就不能正确访问原来栈区的除了栈顶的其它元素
        s.Top = newNode;
        s.size--;
    }
}

struct Node* getTop(struct MyStack &s){return s.Top;}

void clearStack(struct MyStack &s)
{
    while (s.size!=0)
    {
        pop(s);
    }
    
}

int main()
{

}