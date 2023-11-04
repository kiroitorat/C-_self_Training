#include<iostream>
#include<chrono>
//递归是基础

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val )
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};



TreeNode* insert(TreeNode *root , int val)
{
    if (root==nullptr)
    {
        return new TreeNode(val);
    }

    if (val < root->val)
    {
        root->left = insert(root->left , val);
    }else {
        root->right = insert(root->right , val);
    }

    return root;
}


int findMin(TreeNode* root) const
{
    if (root == nullptr) return 0;
    if (root->left == nullptr) return root->val;
    return findMin(root->left);  
}

TreeNode* search(TreeNode* root , int val)
{
    if (root==nullptr || root->val == val)
    {
        return root;
    }

    if (val < root->val)
    {
        return search(root->left , val);
    }

    if (val >root->val)
    {
        return search(root->right , val);
    }
}


TreeNode* remove(TreeNode* root, int val) {
    if (root == nullptr) {
        return root;
    }

    if (val < root->val) {
        root->left = remove(root->left, val);
    } else if (val > root->val) {
        root->right = remove(root->right, val);
    } else {
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        TreeNode* minValueNode = root->right;
        while (minValueNode->left != nullptr) {
            minValueNode = minValueNode->left;
        }

        root->val = minValueNode->val;
        root->right = remove(root->right, minValueNode->val);
    }
    return root;
}


