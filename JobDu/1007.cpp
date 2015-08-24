#include <iostream>
#include <algorithm>
using namespace std;
struct cou {
    int id;
    int gold;
    int allgold;
    double peo;
    double goldrat;
    double allgoldrat;
} nation[1000];
int main() {
    int m, n;
    int a[1000];
    while(cin >> n >> m) {
        for(int i = 0; i < n; ++i) {
            cin >> nation[i].gold >> nation[i].allgold >> nation[i].peo;
            nation[i].id = i;
            nation[i].goldrat = (double)nation[i].gold / nation[i].peo;
            nation[i].allgoldrat = (double)nation[i].allgold / nation[i].peo;
        }
        for(int i = 0; i < m; ++i)
            cin >> a[i];

        for(int i = 0; i < m; ++i) {
            int rank[5] = {1, 1, 1, 1, 1};
            for(int j = 0; j < m; ++j) {
                if(nation[a[j]].gold > nation[a[i]].gold)
                    rank[1]++;
                if(nation[a[j]].allgold > nation[a[i]].allgold)
                    rank[2]++;
                if(nation[a[j]].goldrat > nation[a[i]].goldrat)
                    rank[3]++;
                if(nation[a[j]].allgoldrat > nation[a[i]].allgoldrat)
                    rank[4]++;
            }
            int min = rank[1];
            int flag = 1;
            for(int j = 2; j <= 4; ++j)
                if(min > rank[j]) {
                    min = rank[j];
                    flag = j;
                }
            cout << min << ":" << flag << endl;
        }
        cout << endl;
    }
    return 0;
}