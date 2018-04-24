class Solution
{
    bool isValid(TreeNode *root, long lower, long upper)
    {
        if (root == NULL)
            return true;

        if (root->val <= lower || root->val >= upper)
            return false;

        return isValid(root->left, lower, root->val) &&
               isValid(root->right, root->val, upper);
    }

public:
    bool isValidBST(TreeNode* root)
    {
        return isValid(root, (long)INT_MIN - 1, (long)INT_MAX + 1);
    }
};

