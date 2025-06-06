#include<bits/stdc++.h>
using namespace std;


struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x),  left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) :  val(x),  left(nullptr), right(nullptr) {}
};


class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root == NULL || isSymmetricHelp(root->left, root->right);
    }
    bool isSymmetricHelp(TreeNode* left, TreeNode* right){
        if(left == NULL || right == NULL) return left == right;
        if(left->val != right->val) return false;
        return isSymmetricHelp(left->left, right->right) && isSymmetricHelp(left->right, right->left);
    }
};