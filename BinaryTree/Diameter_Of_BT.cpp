// longest path between two nodes
// path need not pass through root

int findDiameter(TreeNode *node, int &diameter)
{
    if(!root) return 0;
    int left = findDiameter(node->left,diameter);
    int right = findDiameter(node->right,diameter);
    diameter = max(diameter,left+right);
    return 1+max(left,right);
}

int diameter(TreeNode *root)
{
    int diameter = 0;
    findDiameter(root,diameter);
    return diameter;
}