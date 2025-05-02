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

int calculatePathOfNode(TreeNode* node, int& maxPath){
    if(node == 0) return 0;

    int left = max(0, calculatePathOfNode(node->left, maxPath));
    int right = max(0, calculatePathOfNode(node->right, maxPath));

    maxPath = max(maxPath, left + right + node->val);
    return node->val + max(left, right);
}

int maxPathSum(TreeNode* root){
    int maxPath = INT_MIN;
    calculatePathOfNode(root, maxPath);
    return maxPath;
}