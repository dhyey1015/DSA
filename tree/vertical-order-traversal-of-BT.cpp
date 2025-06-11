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

vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>> result;
    queue<pair<TreeNode*, pair<int, int>>> q;
    map<int, map<int, multiset<int>>> track; 
    q.push({root,{0,0}}); 
    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i < size; i++){
            auto [node, pos] = q.front();
            int x = pos.first;
            int y = pos.second;
            track[x][y].insert(node->val);
            q.pop();
            if(node->left){
                q.push({node->left, {x - 1, y + 1}});
            }
            if(node->right){
                q.push({node->right, {x + 1, y + 1}});
            }
        }
    }
    for(auto& [col, row_set] : track){
        vector<int> cols_vals;
        for(auto& [row, vals] : row_set){
            cols_vals.insert(cols_vals.end(), vals.begin(), vals.end());
        }
        result.push_back(cols_vals);
    }
    return result;
}