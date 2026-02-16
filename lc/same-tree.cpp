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
    vector<int> traverse(TreeNode* r, vector<int> &a){
        if(!r) {
            a.push_back(INT_MIN);
            return a;
            };
        a.push_back(r->val);
        traverse(r->left, a);
        traverse(r->right, a);

        return a;

    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        vector<int> a;
        vector<int> b;

        if(traverse(p, a) == traverse(q, b)){
            return true;
        }
        return false;
    }

        bool isSameTreeBetter(TreeNode* p, TreeNode* q) {
        if(!p && !q){
            return true;
        }
        if(!p || !q){
            return false;
        }
        if(p->val != q->val){
            return false;
        }

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
