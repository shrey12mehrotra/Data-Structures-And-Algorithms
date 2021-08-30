
vector<vector<int>> LevelOrder(Node *root)
{
    vector<vector<int>> answer;
    if(!root) return answer;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++)
        {
            Node* temp = q.front();
            q.pop();
            level.push_back(temp->val);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        answer.push_back(level);
    }
    return answer;
}