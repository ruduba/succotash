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
    bool test(TreeNode* a, TreeNode* b){
        if(!a && !b) return true;
        else if(!a || !b) return false;
        else if(a->val != b->val) return false;
        return test(a->left, b->right) && test(a->right, b->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(!root) return false;

        return test(root->left, root->right);
    }
};
