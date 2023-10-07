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
    int minVal(TreeNode* root){
    TreeNode* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->val;
   }
    TreeNode* deleteNode(TreeNode* root, int X) {
        if(root==NULL) return root;
        if(root->val==X) {
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }else if(root->left!=NULL && root->right==NULL ){
                 TreeNode* temp=root->left;
                 delete root;
                 return temp;
             }else if(root->left==NULL && root->right!=NULL ){
                  TreeNode* temp=root->right;
                 delete root;
                 return temp;
             }else if(root->left!=NULL && root->right!=NULL ){
                int mini=minVal(root->right);
                root->val=mini;
                root->right=deleteNode(root->right,mini);
               return root;
             }
      }else if(root->val>X){
             root->left=deleteNode(root->left,X);
              return root;
         }else{
               root->right=deleteNode(root->right,X);
               return root;
      }
            return root;
    }

    
};