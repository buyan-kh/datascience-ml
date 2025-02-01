#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    long long int n, l; cin >> n >> l;
    vector<int> lanterns(n, 0);
    for (int i = 0; i < lanterns.size(); i++) {
        cin >> lanterns[i];
    }
    sort(lanterns.begin(), lanterns.end());

    double gap1, gap2, gap3;
    gap1 = lanterns[0];
    gap2 = (l - lanterns.back());
    gap3 = 0;
    for (int i = 1; i < lanterns.size(); i++) {
        gap3 = max(gap3, (lanterns[i] - lanterns[i-1])/2.0);
    }
    cout << fixed << setprecision(9) << (max(max(gap1, gap2), gap3)) << endl;
    return 0;
}
