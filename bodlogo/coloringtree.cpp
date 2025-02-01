// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

const int N = 1e4 + 5;

vector<int> G[N];
vector<int>clr(N);


int dfs(int curnode, int parentnode) {
    int count = 0;

    for(int childnode : G[curnode]) {
        if(childnode != parentnode) {
            count += dfs(childnode, curnode);

            if (clr[childnode] != clr[curnode]) {
                count++;
            }
        }
    }

    return count;
}

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        G[i].clear();
    }

    for(int i = 2; i <= n; i++) {
        int parentnode;
        cin >> parentnode;
        G[parentnode].push_back(i);
        G[i].push_back(parentnode);
    }
    
    for (int i = 1; i <= n; i++) {
        cin >> clr[i];
    }

    int ans = dfs(1, 0);
    cout << 1 + ans << "\n";


}

int main() {

    solve();

    return 0;
}


