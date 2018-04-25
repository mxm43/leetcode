class Solution
{
    bool isValid(TreeNode *root, TreeNode *lower, TreeNode *upper)
    {
        if (root == NULL)
            return true;

        if ((lower != NULL && root->val <= lower->val) ||
            (upper != NULL && root->val >= upper->val))
            return false;

        return isValid(root->left, lower, root) &&
               isValid(root->right, root, upper);
    }

public:
    bool isValidBST(TreeNode* root)
    {
        return isValid(root, NULL, NULL);
    }
};

