void allThreeOrders(TreeNode *root)
{
    stack<pair<TreeNode *, int>> s;
    vector<int> preorder,inorder,postorder;
    st.push(root,1);
    if(!root) return;
    while(!s.empty())
    {
        auto it = s.top();
        s.pop();
        if(it.second == 1)
        {
            preorder.push_back(it.first->val);
            it.second++;
            s.push(it);
            if(it.first->left)
                s.push(it.first->left,1);
        }
        else if(it.second == 2)
        {
            inorder.push(it.first->val);
            it.second++;
            s.push(it);
            if(it.first->right)
                s.push(it.first->right,1);
        }
        else
            postorder.push(it.first->val);
    }
}