#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void PrintVector(vector<int> v){
	for(vector<int>::iterator i = v.begin(); i != v.end(); ++i)
		cout<<*i<<" ";
	cout<<endl;
}

void PintList(ListNode *l){
	while(l){
		cout<<l->val<<" ";
		l = l->next;
	}
	cout<<endl;
}

vector<int> ListToVector(ListNode *l){
	vector<int> v;
	while(l){
		v.push_back(l->val);
		l = l->next;
	}
	return v;
}

vector<int> AddVector(vector<int> v1, vector<int> v2){
	vector<int> sum;

	if(v1.empty() && v2.empty())
		return sum;
	else if(v1.empty())
		return v2;
	else if(v2.empty())
		return v1; 

	vector<int>::iterator it1, it2;
	it1 = v1.begin();
	it2 = v2.begin();
	while( it1 != v1.end() || it2 != v2.end() ){
		if(it1 != v1.end() && it2 != v2.end()){
			sum.push_back(*it1 + *it2);
			it1++;
			it2++;
		}else if(it1 != v1.end()){
			sum.push_back(*it1);
			it1++;
		}else if(it2 != v2.end()){
			sum.push_back(*it2);
			it2++;
		}
	}

	return sum;
}

void AlterVector(vector<int> &v){
	if(v.empty())
		return;

	for(vector<int>::iterator i = v.begin(); i != v.end() - 1; ++i){
		if(*i >= 10){
			(*i) = *i % 10;
			(*(i + 1))++;
		}
	}
	if(v.back() >= 10){
		v[v.size() - 1] = v.back() % 10;
		v.push_back(1);
	}
}

ListNode *Vector2List(vector<int> v){
	if(v.empty())
		return NULL;

	ListNode *root, *tmp;
	root = new ListNode(v[0]);
	tmp = root;
	for(vector<int>::iterator i = v.begin() + 1; i != v.end(); ++i){
		tmp->next = new ListNode(*i);
		tmp = tmp->next;
	}

	return root;
}

ListNode *addLists(ListNode *l1, ListNode *l2){
	vector<int> v1, v2, v3;
	v1 = ListToVector(l1);
	v2 = ListToVector(l2);
	v3 = AddVector(v1, v2);
	AlterVector(v3);
	return Vector2List(v3); 
}

int main() {
	ListNode *l1 = NULL;
	l1 = new ListNode(3);

	ListNode *l2 = new ListNode(5);
	l2->next = new ListNode(9);
	l2->next->next = new ListNode(2);

	ListNode *l = addLists(l1, l2);
	PintList(l);
	return 0;
}