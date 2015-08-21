#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
	int val;
	ListNode *next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}
};

ListNode *reverse(ListNode *head) {
	if(head == NULL)
		return NULL;

	vector<int> v;
	while(head) {
		v.push_back(head->val);
		head = head->next;
	}

	ListNode *root, *tmp;
	root = new ListNode(v.back());
	tmp = root;
	for(vector<int>::iterator i = v.end() - 2; i >= v.begin(); --i) {
		tmp->next = new ListNode(*i);
		tmp = tmp->next;
	} 
	return root;
}

void PintList(ListNode *node) {
	while(node) {
		cout<<node->val<<" ";
		node = node->next;
	}
}

int main() {
	ListNode *node = new ListNode(1);
	node->next = new ListNode(2);
	node->next->next = new ListNode(3);
	node = reverse(node);
	PintList(node);
	PintList(node);
	return 0;
}