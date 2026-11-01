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
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL) return true;
        queue<TreeNode*> q;
        q.push(root);

        int c=0;
        while(!q.empty()){
            int size=q.size();
            bool f=true;
            int prv;

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(c%2==0){
                    if(node->val%2==0){
                        return false;       
                    }
                    if(!f && node->val<=prv){
                        return false;
                    }
                }
                else{
                    if(node->val%2!=0){
                        return false;       
                    }
                    if(!f && node->val>=prv){
                        return false;
                    }
                }
                prv=node->val;
                f=false; 
                
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            }
        c++;
        }
    return true;
    }
};