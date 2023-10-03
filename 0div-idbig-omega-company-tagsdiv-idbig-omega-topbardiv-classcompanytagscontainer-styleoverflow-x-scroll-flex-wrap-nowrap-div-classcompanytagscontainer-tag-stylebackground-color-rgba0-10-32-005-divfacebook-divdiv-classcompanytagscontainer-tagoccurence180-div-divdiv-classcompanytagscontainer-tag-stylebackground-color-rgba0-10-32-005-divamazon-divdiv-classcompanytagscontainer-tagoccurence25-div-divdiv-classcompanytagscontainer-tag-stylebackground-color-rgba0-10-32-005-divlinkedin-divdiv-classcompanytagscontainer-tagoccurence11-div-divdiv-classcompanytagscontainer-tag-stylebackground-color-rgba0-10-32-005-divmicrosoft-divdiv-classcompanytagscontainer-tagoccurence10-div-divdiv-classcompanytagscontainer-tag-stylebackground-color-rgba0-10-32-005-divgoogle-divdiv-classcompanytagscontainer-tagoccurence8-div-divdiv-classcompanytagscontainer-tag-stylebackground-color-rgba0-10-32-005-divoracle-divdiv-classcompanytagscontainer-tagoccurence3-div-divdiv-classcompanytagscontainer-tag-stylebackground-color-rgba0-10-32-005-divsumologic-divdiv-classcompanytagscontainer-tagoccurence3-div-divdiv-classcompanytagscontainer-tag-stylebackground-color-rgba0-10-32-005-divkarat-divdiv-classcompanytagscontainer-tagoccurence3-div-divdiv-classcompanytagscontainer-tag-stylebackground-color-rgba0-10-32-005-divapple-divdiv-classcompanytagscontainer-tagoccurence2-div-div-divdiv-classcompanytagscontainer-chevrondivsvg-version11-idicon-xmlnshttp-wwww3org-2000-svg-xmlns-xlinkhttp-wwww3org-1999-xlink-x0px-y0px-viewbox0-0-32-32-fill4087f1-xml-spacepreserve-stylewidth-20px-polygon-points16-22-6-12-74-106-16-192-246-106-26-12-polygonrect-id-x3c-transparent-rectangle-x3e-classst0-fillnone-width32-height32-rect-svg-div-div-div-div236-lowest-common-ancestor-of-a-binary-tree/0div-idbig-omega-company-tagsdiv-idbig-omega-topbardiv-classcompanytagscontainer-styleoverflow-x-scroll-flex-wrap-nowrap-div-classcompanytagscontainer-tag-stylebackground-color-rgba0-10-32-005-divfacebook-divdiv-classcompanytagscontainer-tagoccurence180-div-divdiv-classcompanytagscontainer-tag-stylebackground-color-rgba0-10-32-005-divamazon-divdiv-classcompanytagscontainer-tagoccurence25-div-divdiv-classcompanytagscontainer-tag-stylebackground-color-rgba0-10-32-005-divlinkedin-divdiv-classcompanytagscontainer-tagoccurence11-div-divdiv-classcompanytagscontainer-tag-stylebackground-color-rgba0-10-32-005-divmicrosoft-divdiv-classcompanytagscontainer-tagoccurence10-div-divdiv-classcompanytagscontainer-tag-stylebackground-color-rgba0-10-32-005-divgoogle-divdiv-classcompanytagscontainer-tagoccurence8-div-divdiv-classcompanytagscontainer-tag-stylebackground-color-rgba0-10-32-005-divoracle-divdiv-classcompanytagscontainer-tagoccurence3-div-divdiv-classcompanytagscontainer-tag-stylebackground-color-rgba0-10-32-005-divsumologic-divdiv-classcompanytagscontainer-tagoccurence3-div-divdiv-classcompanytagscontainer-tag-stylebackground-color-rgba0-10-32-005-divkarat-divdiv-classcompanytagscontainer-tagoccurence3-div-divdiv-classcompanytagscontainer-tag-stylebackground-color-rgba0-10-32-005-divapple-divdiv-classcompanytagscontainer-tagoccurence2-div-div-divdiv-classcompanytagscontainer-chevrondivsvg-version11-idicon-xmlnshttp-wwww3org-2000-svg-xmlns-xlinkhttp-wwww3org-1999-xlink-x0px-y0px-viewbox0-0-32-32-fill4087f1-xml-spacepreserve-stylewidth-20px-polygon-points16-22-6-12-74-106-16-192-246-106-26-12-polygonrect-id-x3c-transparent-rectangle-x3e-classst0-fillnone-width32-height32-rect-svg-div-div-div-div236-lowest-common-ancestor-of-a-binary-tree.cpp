/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
               if(root==NULL) return NULL;
       if(root==n1 || root==n2){
           return root;
       }
       TreeNode* leftAns=lowestCommonAncestor(root->left,n1,n2);
       TreeNode* rightAns=lowestCommonAncestor(root->right,n1,n2);
       
       if(leftAns!=NULL && rightAns!=NULL){
           return root;
       }
        if(leftAns!=NULL && rightAns==NULL){
           return leftAns;
       }
        if(leftAns==NULL && rightAns!=NULL){
           return rightAns;
       }else{
           return NULL;
       }
    }
};