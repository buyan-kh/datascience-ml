// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

const int N = 2e5;

vector<int> cnt(N + 1, 0);
// cnt[x] is number of leaf node rooted at x.
vector<vector<int> > G(N + 1);

int dfs(int curnode, int parentnode) {
    bool isleaf = true;
    for(int childnode : G[curnode]) {
        if(childnode != parentnode) {
            isleaf = false;
            cnt[curnode] += dfs(childnode, curnode);
        }
    }

    cnt[curnode] += isleaf;
    return cnt[curnode];
}

void solve() {
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++) {
        cnt[i] = 0;
        G[i].clear();
    }

    for(int i = 0; i < n - 1; i++) {
        int v, u;
        cin >> v >> u;
        G[v].push_back(u);
        G[u].push_back(v);
    }

    dfs(1, 0);
    int q;
    cin >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        cout << (long long)cnt[x] * (long long)cnt[y] << "\n";
    }


}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

const int N = 1e4 + 5; // Adjusted for the problem constraints (n <= 10^4)

vector<int> G[N]; // Adjacency list for the tree
vector<int> color(N); // Stores the colors of the vertices

// DFS function to count the number of color changes
int dfs(int node, int parent) {
    int steps = 0;

    // Traverse through each child of the current node
    for (int child : G[node]) {
        if (child != parent) {
            // Recursively call DFS for the child
            steps += dfs(child, node);

            // If the color of the child is different from the current node, increment the steps
            if (color[child] != color[node]) {
                steps++;
            }
        }
    }

    return steps;
}

void solve() {
    int n;
    cin >> n;

    // Clear the graph and reset color array for each test case
    for (int i = 1; i <= n; i++) {
        G[i].clear();
    }

    // Input the tree structure
    for (int i = 2; i <= n; i++) {
        int parent;
        cin >> parent;
        G[parent].push_back(i);
        G[i].push_back(parent);
    }

    // Input the desired colors
    for (int i = 1; i <= n; i++) {
        cin >> color[i];
    }

    // Start DFS from the root (node 1)
    int steps = dfs(1, 0); // Start DFS, root's parent is set to 0

    // We need one initial step to color the root, so add 1 to the result
    cout << steps + 1 << endl;
}

int main() {
    solve();
    return 0;
}
