#include<bits/stdc++.h>
using namespace std;

class Node{
public:
  int val;
  Node* left;
  Node* right;

  Node(int k, Node* l = nullptr, Node* r = nullptr){
    val = k;
    left  = l;
    right = r;
}
};

int traversal(Node* root, int lvl){
  if(root == nullptr) return 0;
  queue<Node*> q;
  q.push(root);
  int curlvl = 0;
  int maxsum = INT_MIN;
  while(!q.empty()){
    int lvlsum = 0;
    int len = q.size();
    for(int i = 0; i<len; i++){
        Node* n = q.front();
        q.pop();
          lvlsum+=n->val;

      if(n->left != nullptr) q.push(n->left);
      if(n->right != nullptr) q.push(n->right);
    }
    maxsum = max(lvlsum, maxsum);
    curlvl++;

  }

  return maxsum;
}

Node* buildTree(vector<int> &arr){

  if (arr.empty() || arr[0] == -1) return nullptr;

  Node* root  = new Node(arr[0]);
  queue<Node*> q;
  q.push(root);

  int i = 1;

  while(!q.empty() && i<arr.size()){
    Node* cur = q.front();
    q.pop();

    if(arr[i] != -1){
      cur->left  = new Node(arr[i]);
      q.push(cur->left);
    }
    i++;

    if(i<arr.size() && arr[i] != -1){
      cur->right = new Node(arr[i]);
      q.push(cur->right);
    }
    i++;
  }
  return root;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;

    vector<int> tree(n);

    for(int i = 0; i<n; i++){
        cin>>tree[i];

    }

    Node* root = buildTree(tree);

    int ans = traversal(root, 0);

    cout<<ans<<"\n";
  }

return 0;
}
