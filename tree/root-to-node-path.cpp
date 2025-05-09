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
bool findPath(TreeNode* node, vector<int>& v, int target){
    if(!node){
        return false;
    }
    v.push_back(node->val);
    
    if(node->val == target) return true;
    
    if(findPath(node->left, v, target) || findPath(node->right, v, target)){
        return true;
    }
    v.pop_back();
    return false;
}
vector<int> rootToNodePath(TreeNode* root, int target){
    
    vector<int> ans;
    if(root == NULL) return ans;

    findPath(root, ans, target);
    return ans;
}