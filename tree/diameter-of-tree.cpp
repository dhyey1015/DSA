#include<bits/stdtr1c++.h>
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
        int maxdiameter = 0;
        int height(TreeNode* node){
            if(node == NULL){
                return 0;
            }
            int left = height(node->left);
            int right = height(node->right);
            maxdiameter = max(maxdiameter, left + right);
            return 1 + max(left, right);
        }
        int diameterOfBinaryTree(TreeNode* root) {
            height(root);
            return maxdiameter;
        }
    };