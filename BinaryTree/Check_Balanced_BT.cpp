// balanced binary tree means 
// height of left subtree - height of right subtree <= 1

int checkBalanced(TreeNode *root)
    {
        if(!root) return 0;
        int leftHeight = checkBalanced(root->left);
        int rightHeight = checkBalanced(root->right);
        if(leftHeight == -1 || rightHeight == -1) return -1;
        if(abs(leftHeight-rightHeight)>1) return -1;
        return max(leftHeight,rightHeight)+1;
    }

    bool isBalanced(TreeNode* root) {
        if(checkBalanced(root) == -1)
            return false;
        return true;
    }