bool leafNode(TreeNode *root)
{
    return (!root->left && !root->right);
}

void leftBoundary(TreeNode *root, vector<int> &ans)
{
    TreeNode *temp = root->left;
    while(temp)
    {
        if(!leafNode(temp))
            ans.push_back(temp->data);
        if(temp->left)
            temp = temp->left;
        else
            temp = temp->right;
    }
}

void leaf(TreeNode *root, vector<int> &ans)
{
    if(leafNode(root))
    {
        ans.push_back(root->data);
        return;
    }
    if(root->left)
        leaf(root->left,ans);
    if(root->right)
        leaf(root->right,ans);
}

void rightBoundary(TreeNode *root, vector<int> &ans)
{
    TreeNode *temp = root->right;
    vector<int> v;
    while(temp)
    {
        if(!leafNode(temp))
            v.push_back(temp->data);
        if(temp->right)
            temp = temp->right;
        else
            temp = temp->left;
    }
    for(int i=v.size()-1; i>=0; i--)
        ans.push_back(v[i]);
}

vector<int> boundaryTraversal(TreeNode *root)
{
    vector<int> ans;
    if(!root)
        return ans;
    if(!leafNode(root))
        ans.push_back(root->data);
    leftBoundary(root,ans);
    leaf(root,ans);
    rightBoundary(root,ans);
    return ans;
}