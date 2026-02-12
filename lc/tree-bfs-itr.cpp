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
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(root == nullptr) return {};
        vector<vector<int>> arr;
        queue <TreeNode*> q;

        

        q.push(root);

        int curlvl = 0;

        while(!q.empty()){
            int len = q.size();
            arr.push_back({});

            for(int i = 0; i<len; i++){
                TreeNode* n = q.front();
                q.pop();

                arr[curlvl].push_back(n->val);

                if(n->left != nullptr) q.push(n->left);
                if(n->right != nullptr) q.push(n->right);
                
            }
            curlvl++;
        }
        return arr;
    }
};