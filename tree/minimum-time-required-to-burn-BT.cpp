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

void parentTrack(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent_track){
    if(root == NULL) return;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i < size; i++){
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
}
TreeNode* findNode(TreeNode* root, int target){
    if(root == NULL) return nullptr;
    if(root->val == target) return root;
    TreeNode* left = findNode(root->left, target);
    if(left) return left;
    TreeNode* right = findNode(root->right, target);
    if(right) return right;
    return nullptr;
}

int amountOfTime(TreeNode* root, int start) {
    unordered_map<TreeNode*, TreeNode*> parent_track;
    parentTrack(root, parent_track); 
    TreeNode* start_node = findNode(root, start);
    unordered_map<TreeNode*, bool> burned;
    queue<TreeNode*> q;
    q.push(start_node);
    burned[start_node] = true;
    int time = -1;
    while(!q.empty()){
        int size = q.size();
        time++;
        for(int i = 0; i < size; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left && !burned[node->left]){
                q.push(node->left);
                burned[node->left] = true;
            }
            if(node->right && !burned[node->right]){
                q.push(node->right);
                burned[node->right] = true;
            }
            if(parent_track[node] && !burned[parent_track[node]]){
                q.push(parent_track[node]);
                burned[parent_track[node]] = true;
            }
        }
    }
    return time;
}