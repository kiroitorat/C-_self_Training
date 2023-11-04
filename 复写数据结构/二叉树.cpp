#include<iostream>

//构造树，可以用类或者是结构体
class MyTree
{
public:
    int data;
    MyTree* leftNode;
    MyTree* rightNode;
    MyTree(int val)
    {
        this->data = val;
        this->leftNode = nullptr;
        this->rightNode = nullptr;
    }
};


void insert(MyTree *n , int newVal)
{
    if (n == nullptr)
    {
        MyTree* newNode = new MyTree(newVal);
    }

    if (n->data < newVal)
    {
        insert(n->rightNode , newVal);
    }else if(n->data > newVal)
    {
        insert(n->leftNode , newVal);
    }

}


int main()
{
    system("pause");
}
