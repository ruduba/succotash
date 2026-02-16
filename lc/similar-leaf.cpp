#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
   int val;
   TreeNode *left;
     TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> getLeaf(TreeNode* root, vector<int> &ans){
        if (root == nullptr) return {};
        if(!root->left && !root->right){
            ans.push_back(root->val);
        }
            getLeaf(root->left, ans);
            getLeaf(root->right, ans);

        return ans;
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a;
        vector<int> b;
        if(getLeaf(root1, a) == getLeaf(root2, b)){
            return true;
        }else{
            return false;
        }

    }
};
