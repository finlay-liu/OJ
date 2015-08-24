class Solution {
    /**
     * @param root: The root of binary tree.
     * @return: Inorder in vector which contains node values.
     */
public:
    void InOrder(TreeNode *node, vector<int> &v) {
        if(node) {
            InOrder(node->left, v);
            v.push_back(node->val);
            InOrder(node->right, v);
        }
    } 
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> v;
        InOrder(root, v);
        return v;
    }
};