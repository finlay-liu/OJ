#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double cosineSimilarity(vector<int> A, vector<int> B) {
	if( (A.size() == 1 && A[0] == 0 
		&& B.size() == 1 && B[0] == 0) || A.empty() || B.empty() )
		return 2.0f;

	double sim, dot, lena, lenb;
	vector<int>::iterator i, j;

	dot = 0;
	lena = 0;
	lenb = 0;
	for(i = A.begin(), j = B.begin(); i != A.end(), j != B.end(); i++, j++){
		dot += *i * *j;
		lena += *i * *i;
		lenb += *j * *j;
	}
	lena = sqrt(lena);
	lenb = sqrt(lenb);

	if(lena == 0 || lenb == 0)
		return 2;

	sim = dot / (lena * lenb);

	return sim;
}

int main(){
	vector<int> a, b;
	a.push_back(0); a.push_back(0); a.push_back(0);
	b.push_back(0); b.push_back(0); b.push_back(0);
	// a.push_back(0); b.push_back(0);
	cout<<cosineSimilarity(a, b);
	return 0;
}