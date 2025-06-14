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

void markParents(TreeNode* root, TreeNode* target, unordered_map<TreeNode*, TreeNode*> &parent_track) {
    if(root == NULL){
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        TreeNode* node = q.front();
        q.pop();
        if(node->left != NULL){
            parent_track[node->left] = node;
            q.push(node->left);
            
        } 
        if(node->right != NULL){
            parent_track[node->right] = node;
            q.push(node->right);
        } 
    }
}

vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    unordered_map<TreeNode*, TreeNode*> parent_track;
    markParents(root, target, parent_track); 

    unordered_map<TreeNode*, bool> visited;
    queue<TreeNode*> q;
    q.push(target);
    visited[target] = true;
    int current_level = 0;
    while (!q.empty()){
        int size = q.size();
        if(current_level++ == k) break;
        for(int i = 0; i < size; i++){
            TreeNode* current = q.front();
            q.pop();
            if(current->left && !visited[current->left]){
                q.push(current->left);
                visited[current->left] = true;
            }
            if(current->right && !visited[current->right]){
                q.push(current->right);
                visited[current->right] = true;
            }
            if(parent_track[current] && !visited[parent_track[current]]){
                q.push(parent_track[current]);
                visited[parent_track[current]] = true;
            }
        }
    }
    vector<int> result;
    while(!q.empty()){
        TreeNode* current = q.front();
        q.pop();
        result.push_back(current->val);
    }
    return result;
}