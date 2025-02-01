#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {8, 4, 5, 9};
    int size = v.size();
    for (int i = 0; i < size; i++){
        v.push_back(v[i]);
    }

    for (int n: v)
        cout << n << ' ';

}


/*
g++ -std=c++0x 2.cpp
*/