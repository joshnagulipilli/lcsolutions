/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void inorder(TreeNode* root , map<int,int>& m)
    {
        if(root!=NULL) {
             inorder(root->left,m);
             m[root->val]++;
             inorder(root->right,m);
        }
    }
    vector<int> findMode(TreeNode* root) {
         map<int,int>m;
         inorder(root , m);
         vector<int>v;
         int ans,freq=INT_MIN ;
         for(auto i:m){
             if(freq<=i.second)
             {  freq=i.second;
             }
         }
         for(auto i:m){
             if(i.second==freq) v.push_back(i.first);
         }
          return v;
    }
};