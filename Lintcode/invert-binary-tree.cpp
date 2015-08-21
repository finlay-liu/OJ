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

void invertBinaryTree(TreeNode *root) {
	if(root == NULL)
		return;

	TreeNode *tmp = root->left;
	root->left = root->right;
	root->right = tmp;

	invertBinaryTree(root->left);
	invertBinaryTree(root->right);
}

int main() {
	TreeNode *node = new TreeNode(1);
	node->left =new TreeNode(2);
	node->right = new TreeNode(3);
	invertBinaryTree(node);
	cout<<node->left->val;
	return 0;
}