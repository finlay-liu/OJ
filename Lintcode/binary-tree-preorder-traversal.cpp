class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: Preorder in vector which contains node values.
     */
    
    void PreOrder(TreeNode *node, vector<int> &v) {
        if(node) {
            v.push_back(node->val);
            PreOrder(node->left, v);
            PreOrder(node->right, v);
        }
    } 
    
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> v;
        PreOrder(root, v);
        return v;
    }
};