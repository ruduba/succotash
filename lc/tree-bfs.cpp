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
    void bfs(TreeNode* root, int lvl, vector<vector<int>> &res){
        if(root == nullptr) return;

        if(res.size()<=lvl){
            res.push_back({});
        }

        res[lvl].push_back(root->val);

        bfs(root->left, lvl+1, res);
        bfs(root->right, lvl+1, res);
    }


    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> arr;

        bfs(root, 0, arr);

        return arr;
    }
};