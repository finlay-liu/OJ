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

ListNode *nthToLast(ListNode *head, int n) {
	if(!head)
		return head;
	vector<ListNode*> v;
	while(head) {
		v.push_back(head);
		head = head->next;
	}
	return v[v.size() - n];
}

int main() {
	ListNode *l = new ListNode(1);
	l->next = new ListNode(2);
	l->next->next = new ListNode(3);
	cout<<nthToLast(l, 2)->val<<endl;
	return 0;
}