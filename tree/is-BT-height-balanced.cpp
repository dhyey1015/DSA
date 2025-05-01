#include<bits/stdc++.h>
using namespace std;
//   Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// returns the height of the current node 
int height(TreeNode* node){
    if(node == NULL) return 0;
    int left = height(node->left);
    int right = height(node->right);
    return 1 + max(left, right);
}

bool isBalanced(TreeNode* root) {
    if (root == NULL) return true;
    int left = height(root->left);
    int right = height(root->right);
    if(abs(right-left) > 1) return false;

    bool leftSide = isBalanced(root->left); // checks if the left node exist?
    bool rightSide = isBalanced(root->right); //checks if the right node exist?
    // if one of them is false the code will return false
    if(!leftSide || !rightSide) return false;
    return true;
}