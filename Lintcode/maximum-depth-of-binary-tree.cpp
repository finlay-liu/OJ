#include <iostream>
using namespace std;

class TreeNode {
public:
	int val;
	TreeNode *left, *right;
	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};

int max(int lsh, int rsh) {
	if(lsh >= rsh)
		return lsh;
	else
		return rsh;
}

int maxDepth(TreeNode *root) {
	if(root == NULL)
		return 0;
	else
		return 1 + max( maxDepth(root->left), maxDepth(root->right) );
}

int main() {
	TreeNode *node = new TreeNode(3);
	node->right = new TreeNode(4);
	cout<<maxDepth(node);
	return 0;
}