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

vector<int> inOrderTraversalIterative(TreeNode* root){
    vector<int> ans;
    TreeNode* node = root;
    stack<TreeNode*> s;
    while(true){
        if(node != NULL){
            s.push(node);
            node = node->left;
        } else {
            if(s.empty() == true) break;
            node = s.top();
            s.pop();
            ans.push_back(node->val);
            node = node->right;
        }
    }
    return ans;
}



int main(){



    return 0;
}

