#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int turnDir = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << "#";
            }
        } else {
            ++turnDir;

            for (int j = 0; j < m; j++) {
                if (turnDir % 2 == 1 && j == m - 1) {
                    cout << "#";
                } else if (turnDir % 2 == 0 && j == 0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}