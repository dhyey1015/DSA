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

void gettingLeft(TreeNode* node, vector<int>& v){
    while(node){
        if(!(node->left == NULL && node->right == NULL)){
            v.push_back(node->val);
        } 
        if(node->left) node = node->left;
        else node = node->right;
    }
}

void gettingLeaf(TreeNode* node, vector<int>& v){
    if(node == NULL) return;
    if(node->left == NULL && node->right == NULL){
        v.push_back(node->val);
        return;
    } 
    gettingLeaf(node->left, v);
    gettingLeaf(node->right, v);
}

void gettingRight(TreeNode* node, vector<int>& v){
    vector<int> temp;
    while(node){
        if(!(node->left == NULL && node->right == NULL)){
            temp.push_back(node->val);
        }
        if(node->right) node = node->right;
        else node = node->left;
    }
    reverse(temp.begin(), temp.end());
    v.insert(v.end(),temp.begin(), temp.end());
}

vector<int> boundary(TreeNode* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    if (!(root->left == NULL && root->right == NULL))
        ans.push_back(root->val);

    gettingLeft(root->left, ans);
    gettingLeaf(root, ans);
    gettingRight(root->right, ans );

    return ans;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(6);

    vector<int> result = boundary(root);
    for (int val : result) {
        cout << val << " ";
    }
}