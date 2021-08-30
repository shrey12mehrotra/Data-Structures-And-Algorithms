vector<int> preorderTraversal(TreeNode* root) {
    vector<int> answer;
    if(!root) return answer;
    stack<TreeNode*> s;
    s.push(root);
    while(!s.empty())
    {
        TreeNode* temp = s.top();
        answer.push_back(temp->val);
        s.pop();
        if(temp->right)
            s.push(temp->right);
        if(temp->left)
            s.push(temp->left);
    }
    return answer;
    }