class Solution
{
private:
    void recursion(vector<int> &v, TreeNode *root)
    {
        if (root == NULL)
            return;

        recursion(v, root->left);
        v.push_back(root->val);
        recursion(v, root->right);
    }

public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v;

        recursion(v, root);

        return v;
    }
};

