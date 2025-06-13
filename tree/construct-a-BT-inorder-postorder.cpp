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


TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    unordered_map<int, int> inMap;

    for(int i = 0; i < inorder.size(); i++){
        inMap[inorder[i]] = i;
    }

    TreeNode* root = buildingTree(postorder, 0, postorder.size() - 1, inorder, 0, inorder.size() - 1, inMap);

    return root;
}

TreeNode* buildingTree(vector<int>& postorder, int postStart, int postEnd, vector<int>& inorder, int inStart, int inEnd, unordered_map<int, int>& inMap){
    if(postStart > postEnd || inStart > inEnd) return nullptr;    

    TreeNode* root = new TreeNode(postorder[postEnd]);
    int inRoot = inMap[root->val];
    int numsLeft = inRoot - inStart;
    
    root->left = buildingTree(postorder, postStart, postStart + numsLeft - 1, inorder, inStart, inRoot - 1, inMap);
    root->right = buildingTree(postorder, postStart + numsLeft, postEnd - 1, inorder, inRoot + 1, inEnd, inMap);
    
    return root;
}