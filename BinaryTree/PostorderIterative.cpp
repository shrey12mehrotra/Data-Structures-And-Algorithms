// left right root

// two stack solution
vector<int> postOrderIterative(TreeNode *root)
{
    vector<int> ans;
    if(root == NULL) return ans;
    stack<TreeNode*> s1,s2;
    s1.push(root);
    while(!s1.empty())
    {
        root = s1.top();
        s1.pop();
        s2.push(root);
        if(root->left)
            s1.push(root->left);
        if(root->right)
            s1.push(root->right);
    }
    while(!s2.empty())
    {
        ans.push_back(s2.top()->val);
        s2.pop();
    }
    return ans;
}

// one stack solution
// TC - O(2N)   SC - O(N)

vector<int> PostOrder(TreeNode *root)
{
    vector<int> ans;
    if(!root) return ans;
    stack<TreeNode *> s;
    TreeNode *curr = root;
    while(curr || !s.empty())
    {
        if(curr)
        {
            s.push(curr);
            curr = curr->left;
        }
        else{
            TreeNode *temp = s.top()->right;
            if(temp == NULL)
            {
                temp = s.top();
                s.pop();
                ans.push_back(temp->val);
                while(!s.empty() && temp == s.top()->right)
                {
                    temp = s.top();
                    s.pop();
                    ans.push_back(temp->val);
                }
            }
            else
                curr = temp;
        }
    }
    return ans;
}