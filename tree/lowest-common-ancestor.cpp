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
    bool findPath(TreeNode* node, vector<TreeNode*>& v, TreeNode* target){
        if(node == NULL) return false;
        v.push_back(node);
        if(node->val == target->val) return true;
        if(findPath(node->left, v, target) || findPath(node->right, v,target)){
            return true;
        }
        v.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pPath, qPath;
        findPath(root, pPath, p);
        findPath(root, qPath, q);
        int minLen = min(pPath.size(), qPath.size());
        TreeNode* lca = nullptr;
        for(int i = 0; i < minLen; i++){
            if(pPath[i] == qPath[i]){
                lca = pPath[i];
            } else {
                break;
            }
        }
        return lca;
    }
};