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

TreeNode* insertNode(TreeNode* root, TreeNode* node) {
	if(root == NULL) {
		return node;
	}else {
		cout<< "root != NULL "<<node->val<<endl;
		if (node->val < root->val)
			root->left = insertNode(root->left, node);
		else
			root->right = insertNode(root->right, node);
	}
	return root;
}

void PreOrder(TreeNode* tree) {
	if(tree != NULL){
		cout<<tree->val<<" ";
		PreOrder(tree->left);
		PreOrder(tree->right);
	}
}

int main() {
	int array[] = {1, 4 ,3, 6};
	TreeNode *tree = new TreeNode(2);
	for (int i = 0; i < 4; ++i) {
		TreeNode *node = new TreeNode(array[i]);
		insertNode(tree, node);
	}
	PreOrder(tree);
	return 0;
}