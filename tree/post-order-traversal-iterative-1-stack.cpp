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

vector<int> postorderTraversal(TreeNode* root){
    vector<int> ans;
    stack<TreeNode*> st;
    TreeNode* node = root;
    while(node != NULL || !st.empty()){
        if(node != NULL){
            st.push(node);
            node = node->left;
        } else {
            TreeNode* temp = st.top()->right;
            if(temp == NULL){
                temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }
            } else {
                node = temp;
            }
        }
    }
}

int main(){


    return 0;
}