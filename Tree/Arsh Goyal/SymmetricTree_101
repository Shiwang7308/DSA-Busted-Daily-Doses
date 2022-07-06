// APP1 using vector

class Solution {
    private:
   void isLeft(TreeNode*root, vector<int>&Left)
    {
        if(root==NULL)
        {
            Left.push_back(-101);
                return;
        }
        //base case
          Left.push_back(root->val);
        //mera work
        
        isLeft(root->left,Left);
        isLeft(root->right,Left);
        //recursion ka work
    }
    
  void isRight(TreeNode*root, vector<int>&Right)
    {
        if(root==NULL)
        {
            Right.push_back(-101);
                return;
        }
        
        Right.push_back(root->val);
        
        isRight(root->right,Right);
        isRight(root->left,Right);
    }
    
    
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        
        vector<int>Left;
        vector<int>Right;
        
        isLeft(root,Left);
        isRight(root,Right);
        if(Left==Right)
            return true;
        else
            return false;
    }
};

// APP2 using pure functionality of tree
