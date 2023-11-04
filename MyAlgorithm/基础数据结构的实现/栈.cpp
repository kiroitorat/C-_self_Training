#include<iostream>
#include<string>
using namespace std;
//栈有单链表实现和数组实现
//类的实现以后再来
// template<typename diy>
// class stack
// {
// private:
//     struct AS
//     {
//         diy x;
//         AS* next;
//     };

//     std::string name;
//     //std::underlying_type_t();

// public:
//     //stack的构造方法，列表化构造
//     stack(int newX , std::string newName):
//     AS{new AS{newX , nullptr}} , name{newName}
//     {}
//     //transaction_safe_dynamic(std::is_signed());
// };

// void test1()
// {
//     stack<int> s1 = new stack<int>(1 , "kiroitorat");
// }

//为栈外置节点结构
struct Node
{
    int data;
    struct Node* next;
};

//定义栈
struct myStack
{
    //标记栈顶
    struct Node *Top;

    //记录栈大小
    int size;
};

//创建节点的函数
struct Node* createNode(int val)
{
    struct Node* newNode = new struct Node();
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

//创建栈的函数
struct myStack* createStack()
{
    struct myStack* newStack;
    newStack->size = 0;
    newStack->Top = NULL;
    return newStack;
}

//入栈函数，注意是节点入栈
void push(struct myStack &s , int newData)
{
    

    struct Node* newNode = createNode(newData);//记录节点
    newNode->next = s.Top;//节点的下一个节点覆盖为原来的栈顶节点
    s.Top = newNode;//现栈顶节点成为记录的节点
    s.size++;
    

}

//获取栈顶元素
int front(struct myStack &s)
{
    if (s.size == 0 && s.Top == NULL)
    {
        return -1;
    }else
    {
        return s.Top->data;
    }
}

//出栈函数
void pop(struct myStack &s)
{
    if (s.Top!=NULL)
    {
        struct Node* newNode = s.Top->next;//记录栈顶的下一个节点
        delete s.Top;//删除栈顶
        s.Top = newNode;//使得栈顶的下一个节点成为栈顶
        s.size--;
    }else 
    {
        std::cout<<"栈区为空"<<std::endl;
    }
    
}

//测试用的show函数
void show(struct myStack &s)
{
    for (int i = 0; i < s.size; i++)
    {
        std::cout<<s.Top->data<<" ";
    }
    
}



void testBy()
{
    
    struct Node s1 = {1,NULL};
    struct Node s2 = {2,NULL};
    struct Node s3 = {3,NULL};

    //第一种连接方法
    *(s1.next) = s2;
    *(s2.next) = s3;

    struct Node *pNode1 = &s1;
    struct Node *pNode2 = &s2;
    struct Node *pNode3 = &s3;

    //第二种连接方法
    // pNode1->next = pNode2;
    // pNode2->next = pNode3;
}
int main()
{ 
    struct myStack s1;
    push(s1,10);
    push(s1,20);
    push(s1,30);
    push(s1,40);

    for (int i = 0; i < s1.size/16; i++)
    {
        std::cout<<s1.Top->data<<" ";
    }

    system("pause");
}