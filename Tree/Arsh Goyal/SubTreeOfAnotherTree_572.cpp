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
    private:
//     TreeNode* find(TreeNode* root,int data)
//     {
//         if(root==NULL)
//             return NULL;
        
//         if(root->val==data)
//             return root;
        
//         return find(root->left,data);
//         return find(root->right,data);
//     }
    
    bool check(TreeNode* root, TreeNode* subRoot)
    {
        if(root==NULL && subRoot==NULL)
            return true;
        
        if((root==NULL && subRoot!=NULL) || (root!=NULL && subRoot==NULL))
            return false;
        
        if((root->val == subRoot->val) && (check(root->left,subRoot->left)) && (check(root->right,subRoot->right)))
            return true;
        else
            return false;
            
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot==NULL)
            return true;
        
        if((root==NULL && subRoot!=NULL) || (root!=NULL && subRoot==NULL))
            return false;
        
        // TreeNode *rootS=find(root,subRoot->val);
        bool ans =check(root,subRoot);
        
        if(ans || (isSubtree(root->left,subRoot)) || (isSubtree(root->right,subRoot)))
            return true;
        else
            return false;
    }
};