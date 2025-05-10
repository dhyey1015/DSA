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

class Solution {
public:
    TreeNode* findPath(TreeNode* node, TreeNode* p, TreeNode* q){
        if(node == NULL || node == q || node == p){
            return node;
        }

        TreeNode*  left = findPath(node->left, p, q);
        TreeNode*  right = findPath(node->right, p, q);

        if(left != NULL && right != NULL){
            return node;
        } else {
            if(right == NULL){
                return left;
            } else {
                return right;
            }
        }
        
        return nullptr;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return findPath(root, p, q);
    }

    TreeNode* lowestCommonAncestor2(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q) return root;
        
        TreeNode*  left = lowestCommonAncestor2(root->left, p, q);
        TreeNode*  right = lowestCommonAncestor2(root->right, p, q);
        
        if(left != NULL && right != NULL) return root;

        return left != NULL ? left : right;
    }
};