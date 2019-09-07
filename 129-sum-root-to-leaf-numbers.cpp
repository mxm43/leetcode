class Solution {
private:
    int recu(TreeNode *root, int value)
    {
        if (root == nullptr)
            return 0;

        int new_val = value * 10 + root->val;
        if (root->left == nullptr && root->right == nullptr)
            return new_val;

        return recu(root->left, new_val) + recu(root->right, new_val);
    }

public:
    int sumNumbers(TreeNode* root)
    {
        return recu(root, 0);
    }
};

