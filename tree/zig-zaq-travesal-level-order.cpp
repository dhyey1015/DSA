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


vector<vector<int>> zigZagTravesal(TreeNode* root){
    vector<vector<int>> ans;
    if(root == NULL){
        return ans;
    }
    bool leftToRight = true;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> level;
        int size = q.size();
        for(int i = 0; i < size; i++){
            TreeNode* node = q.front();
            q.pop();
            if(leftToRight){
                level.push_back(node->val);
            } else {
                level.insert(level.begin(), node->val);
            }
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
        }
        ans.push_back(level);
        leftToRight =!leftToRight;
    }
    return ans;
}

int main(){

    
}
