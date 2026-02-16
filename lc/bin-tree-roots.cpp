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

    void findPath(TreeNode* r, vector<string> &ans, string tmp){
        tmp += to_string(r->val);
        if(r->left) findPath(r->left, ans, tmp + "->");
        if(r->right) findPath(r->right, ans, tmp + "->");
        if(!r->left && !r->right) ans.push_back(tmp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;

        findPath(root, ans, "");

        return ans;


    }
};
