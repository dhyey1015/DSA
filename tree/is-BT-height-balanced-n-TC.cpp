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

// TC = O(N), SC = O(N)
int height(TreeNode* node){
    if(node == NULL) return 0;

    int left = height(node->left);
    if(left == -1) return -1;

    int right = height(node->right);
    if(right == -1) return -1;

    if(abs(left - right) > 1) return -1;

    return 1 + max(left, right);
}

bool isBalanced(TreeNode* root){
    return (height(root) == -1)? false : true;
}