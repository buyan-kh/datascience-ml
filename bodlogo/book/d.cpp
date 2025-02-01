#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<long long> prefix(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        prefix[i] = prefix[i-1] + x;
    }
    
    int m;
    cin >> m;
    while(m--) {
        long long q;
        cin >> q;
        
        int left = 1, right = n;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(prefix[mid] >= q && prefix[mid-1] < q) {
                cout << mid << endl;
                break;
            }
            if(prefix[mid] < q) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    
    return 0;
}



