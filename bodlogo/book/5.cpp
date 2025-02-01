#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    vector<int> myarr(n, 0);
    vector<vector<int>> bookings = {{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
    for (int i : myarr) {
        cout << i << endl;
    }
    for (const auto j: bookings) {
        for (int k = j[0]; k <= j[1]; k++) {
            myarr[k - 1] += j[2];
        }
    }
    for (int i: myarr) {
        cout << i << ' ';
    }
}