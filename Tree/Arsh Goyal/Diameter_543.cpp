// APP1   TC: O(N*N)
class Solution {
    private:
    int height(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        int op1 = diameterOfBinaryTree(root->left);
        int op2 = diameterOfBinaryTree(root->right);
        int op3 = (height(root->left)+height(root->right));
        // cout<<"op1: "<<op1<<endl;
        // cout<<"op2: "<<op2<<endl;
        // cout<<"op3: "<<op3<<endl;
        return max(max(op1,op2),op3);
    }
};

// APP 2  TC: O(n) ---> using pairs to call height and diameter at a one time
class Solution {
    private:
    pair<int,int> dFast(TreeNode* root)
    {
        if(root==NULL)
        {
            pair<int,int>p = make_pair(0,0);
            return p;
        }
        
        pair<int,int>Left = dFast(root->left);
        pair<int,int>Right = dFast(root->right);
        
        int Ldia = Left.first;
        int Rdia = Right.first;
        int height =(Left.second+Right.second);
        
        pair<int,int>ans;
        ans.first=max(max(Ldia,Rdia),height);
        ans.second=max(Left.second,Right.second)+1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return dFast(root).first;
    }
};
