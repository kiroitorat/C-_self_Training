//平衡二叉树，优化了搜索效率，相对地降低了插入和删除效率
//1.左右子树高度差不超过1，注意，是对于全部节点来说！！！
//2.有序
//当插入或者删除时，出现的不平衡用旋转解决

#include<iostream>

//节点模板
template<class T>
struct TreeNode
{
    T data;//数据
    TreeNode* leftNode;
    TreeNode* rightNode;
    int height;//高度

    TreeNode(const T& data)
    {
        this->data = data;
        leftNode = NULL;
        rightNode = NULL;
        height = 0;
    }
};

//树模板
template<class T>
class AVL
{
private:
    TreeNode<T>* pRoot; //这个就是根节点

    //旋转函数
    TreeNode<T>* LL(TreeNode<T>* &root)
    {
        return root;
    }

    TreeNode<T>* RR(TreeNode<T>* &root){return root;}

    TreeNode<T>* LR(TreeNode<T>* &root){return root;}

    TreeNode<T>* RL(TreeNode<T>* &root){return root;}



    //获取高度
    int _getHight(TreeNode<T>* &pRoot)
    {
        if (pRoot)
        {
            return pRoot->height;
        }else return 0;
        
    }
    
    //安全性编程
    //插入为两步
    //1.先以有序插入
    //2.判断是否需要旋转
    void _insertNodeToTree(TreeNode<T>* &root , const T& data) //“_”代表私有的
    {

        //1.以有序的方式正常插入

        //基准情况，即插入的情况，需要当前节点为空
        if (root == NULL) {root = new TreeNode<T>(data);}

        if(data > root->data)
        {
            _insertNodeToTree(root->rightNode , data);
            
            
            // //2.判读是否需要旋转
            // if(_getHight(root->rightNode) - _getHight(root->leftNode) > 1)
            // {
            //     //2.1判断之前的插入是插入到了root->rightNode的右节点 还是 左节点
                
            //     //插入的数据大于了右子树的data ， 则为右插
            //     if (data > root->rightNode->data)
            //     {
            //         root = LL(root);
            //     }
            //     //反之为左插
            //     else if (data < root->leftNode->data)
            //     {
            //         root = RL(root);;
            //     }
                
                
            // }
        }
        else if (data < root->data)
        {
            _insertNodeToTree(root->leftNode , data);
            
            
            //2.判读是否需要旋转
            // if(_getHight(root->leftNode) - _getHight(root->rightNode) > 1)
            // {
            //     //判断是哪种插入，对于左子树进行左插还是右插

            //     if (data > root->leftNode->data)//右插
            //     {
            //         root = RL(root);
            //     }
            //     //左插
            //     else if (data < root->leftNode->data)
            //     {
            //         root = RR(root);
            //     }
                
                
            // }
        }

        //3.插完了设置高度
        int leftH = _getHight(root->leftNode);
        int rightH = _getHight(root->rightNode);

        root->height = 1 + std::max(leftH , rightH);
        std::cout<<"高度为:"<<root->height<<std::endl;
    }



public:
    AVL(){pRoot = NULL;}


    void insert(const T& data)
    {
        _insertNodeToTree(pRoot , data);
    }

    
};


int main()
{
    AVL<int> t;

    t.insert(18);
    t.insert(88);
    t.insert(66);
    t.insert(4);
    t.insert(33);


    system("pause");
    return 0;
}