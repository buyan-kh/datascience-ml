#include <iostream>
using namespace std;

int main() {
    string s = "1.1.1.1";
    string mystr;
    int n = s.size();
    for (char ch: s) {
        if (ch == '.') {
            mystr += "[.]";
        }
        else {
            mystr += ch;
        }
    }
    cout << mystr << endl;
}