#include <iostream>
#include <vector>
using namespace std;
int main(){

    int n;
    long long sum = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n / 2; i++) {
        int group = a[i] + a[n - 1 - i];
        sum += group * group;
    }
    cout << sum << endl;
}