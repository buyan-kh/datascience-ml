#include <iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    
    int a = k / 2;
    int b = k % 2;

    string ans = "";


    for (int i = 0; i < a; i++){
            ans += "8";
    }

    if (b) {
        ans += "0";
    }

    cout << ans << endl;

}