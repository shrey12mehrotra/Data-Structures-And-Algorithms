vector<vector<int>> zigzagTraversal(TreeNode *root)
{
    vector<vector<int>> ans;
    if(!root) return ans;
    queue<TreeNode *> q;
    q.push(root);
    bool leftToRight = true;
    while(!q.empty())
    {
        int n = q.size();
        vector<int> level(n);
        for(int i=0; i<n; i++)
        {
            TreeNode *temp = q.front();
            q.pop();
            int index = leftToRight ? i : n-1-i;
            level[index] = temp->val;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        ans.push_back(level);
        leftToRight = !leftToRight;
    }
    return ans;
}