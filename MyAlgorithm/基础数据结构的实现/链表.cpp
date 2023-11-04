#include<iostream>

//双向链表
template<typename diy>
class Mylist
{
private:
    struct Node
    {
        int val;
        Node* next;
        Node* pre;
    };off64_t{}
    
    //定义链表属性，有一个值，有一个指向下一个链表的指针
public:
    //构造方法，主要是要注意前后的节点设置为空
    // Mylist(int newVal)
    // {
    //     this->val = new;
    //     this->next = nullptr;
    //     this->pre = nullptr;
    // }

    //建议练习下面这种初始化列表写法
    Mylist(int newVal):val{newVal},next{nullptr},pre{nullptr}{}

};


int main()
{

}