#include <iostream>
using namespace std;

int main(){
    string b;
    cin >> b;
    int score = 0;
    for (int i = 0; i < b.size() - 1; i++) {
        score += abs(b[i] - b[i + 1]);
    }
    cout << score << endl;
}