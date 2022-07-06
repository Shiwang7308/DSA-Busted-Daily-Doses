//App 1 By Recursion

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
    
        TreeNode *temp = root->left;
        root->left=root->right;
        root->right=temp;
        // we can also done by swap(root->left,root->right);
        root->left=invertTree(root->left);
        // if(root->right)
        root->right=invertTree(root->right);
        
        return root;
    }

// App2 Iterative approach (using stack)
 TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
            return NULL;
        
        stack<TreeNode*>s;
        
        s.push(root);
        while(!s.empty())
        {
            TreeNode *temp = s.top();
            s.pop();
            
            if(temp->left)
            s.push(temp->left);
            
            if(temp->right)
            s.push(temp->right);
            
            swap(temp->left,temp->right);
        }
        return root;
    }

// By queue
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
            return NULL;
        
        queue<TreeNode*>q;
        
        s.push(root);
        while(!s.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            
           
            
            if(temp->right)
            q.push(temp->right);
            
            
             if(temp->left)
            q.push(temp->left);
            
            swap(temp->left,temp->right);
        }
        return root;
    }
};