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

void PrintList(ListNode *l) {
	while(l) {
		cout<<l->val<<" ";
		l = l->next;
	}
}

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
	ListNode *list = NULL;
	ListNode *tmp = NULL;
	int itmp;
	while(l1 || l2) {
		if(l1 && l2) {
			if(l1->val <= l2->val) {
				itmp = l1->val;
				l1 = l1->next;
			}else if(l1->val > l2->val) {
				itmp = l2->val;
				l2 = l2->next;
			}
		}else if(l1) {
			itmp = l1->val;
			l1 = l1->next;
		}else if(l2) {
			itmp = l2->val;
			l2 = l2->next;
		}
		//cout<<itmp<<endl;
		
		if(!tmp && !list) {
			list = new ListNode(itmp);
			tmp = list;
		}else {
			ListNode *l = new ListNode(itmp); 
			tmp->next = l;
			tmp = tmp->next;
		}
	}
	//PrintList(tmp);
	return list;
}



ListNode *MakeList(int array[], int N) {
	if(N == 0)
		return NULL;

	ListNode *node = new ListNode(array[0]);
	ListNode *tmp = node;
	for(int i = 1; i < N; ++i) {
		ListNode *l = new ListNode(array[i]);
		tmp->next = l;
		tmp = tmp->next;
	}
	return node;
}

int main() {
	int array1[] = {1,1,1,1};
	ListNode *l1 = MakeList(array1, 4);
	
	int array2[] = {1,1};
	ListNode *l2 = MakeList(array2, 2);

	ListNode *l3 = mergeTwoLists(l1, l2);
	PrintList(l3);
	return 0;
}