// Recursive solution

int findDepth(TreeNode *root)
{
    if(!root) return 0;
    int leftHeight = findDepth(root->left);
    int rightHeight = findDepth(root->right);
    return 1+max(leftHeight,rightHeight);
}

// Iterative solution
int findDepth(TreeNode *root)
{
    int count;
    if(!root) return 0;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        count++;
        for(int i=0; i<n; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return count;
}