#include <iostream>
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

void PrintList(ListNode *node){
	while(node){
		cout<<node->val<<" ";
		node = node->next;
	}
	cout<<endl;
}

ListNode *deleteDuplicates(ListNode *head){
	if(!head)
		return NULL;
	else if(head && !head->next)
		return head;

	ListNode *n1 = head;
	ListNode *n2 = n1->next;

	while(n2){
		if(n1->val == n2->val){
			n1->next = n2->next;
			n2 = n2->next;
		}else{
			n1 = n2;
			n2 = n2->next;
		}
	}
	return head;
}

int main(){
	ListNode *node = new ListNode(1);
	node->next = new ListNode(1);
	node->next->next = new ListNode(2);
	node->next->next->next = new ListNode(3);
	PrintList(deleteDuplicates(node));
	return 0;
}