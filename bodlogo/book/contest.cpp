#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<string>matrix(n);
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i];
        }
    } 

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            
            if (matrix[i][j] == 'X' &&
            matrix[i - 1][j - 1] == 'X' &&
            matrix[i - 1][j + 1] == 'X' &&
            matrix[i + 1][j + 1] == 'X' &&
            matrix[i + 1][j - 1] == 'X') {
                count += 1;
            }
        }
    } 

    cout << count << endl;
}