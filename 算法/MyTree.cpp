#include<iostream>

//创立节点结构体
template<class A>
struct Node
{
    A data;
    Node* LNode;
    Node* RNode;
    int H;

    Node(const A &NewData):data(NewData),LNode(NULL),RNode(NULL),H(0){}
};


//创立树类
template<class T>
class Tree
{
private:
    Node<T>* Root;

    int _getH(Node<T>* &root)
    {
        if (root)
        {
            return root->H;
        }else return 0;
        
    }

    void _insert(Node<T>* &root , const T &data)
    {
        if (root == NULL)
        {
            root = new Node<T>(data);
        }

        if (data > root->data)
        {
            _insert(root->RNode , data);
        }

        if (data < root->data)
        {
            _insert(root->LNode , data);
        }

        //设置高度
        root->H = std::max(_getH(root->LNode) , _getH(root->RNode)) + 1;
        
    }

    void _delete(Node<T>* &root , const T &data)
    {
        if (root == NULL)
        {
            return;
        }

        if (data > root->data)
        {
            _delete(root->RNode , data);
        }

        if (data < root->data)
        {
            _delete(root->LNode , data);
        }
        

        Node<T>* newNode = find(data);
        if (newNode)
        {
            //删除有点复杂 
        }
        

    }

    Node<T>* _find(Node<T>* &root , const T &data)
    {
        if (root == NULL || data == root->data)
        {
           return root;
        }

        if (data < root->data)
        {
            _find(root->LNode , data);
        }else if (data > root->data)
        {
            _find(root->RNode , data);
        }
        
        
    }

public:

    Tree()
    {
        Root = NULL;
    }

    void showH()
    {
        std::cout<<_getH(Root);
    }

    void insert(const T &data)
    {
        _insert(Root , data);
    }

    void MyDelete(const T &data)
    {
        _delete(Root , data);
    }

    Node<T>* find(const T &data)
    {
        _find(Root , data);
    }
};




int main()
{

}