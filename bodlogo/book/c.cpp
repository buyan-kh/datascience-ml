#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long n, k;
        cin >> n >> k;
        long long ans = k + (k - 1) / (n - 1);
        cout << ans << endl;
    }
    return 0;
}
