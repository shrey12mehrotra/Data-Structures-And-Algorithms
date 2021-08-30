// left root right

vector<int> inorderIterative(TreeNode *root)
{
    vector<int> ans;
    stack<TreeNode *> s;
    TreeNode *temp = root;
    while(true)
    {
        if(temp != NULL)
        {
            s.push(temp);
            temp = temp->left;
        }
        else
        {
            if(s.empty()) break;
            temp = s.top();
            ans.push_back(temp->val);
            s.pop();
            temp = temp->right;
        }
    }
    return ans;
}