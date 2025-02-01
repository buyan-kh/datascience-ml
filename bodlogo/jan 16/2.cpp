#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int total;
    int price = k * ((w * (w + 1) )/ 2);
    if(n < price){
        cout << (n - price) * -1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}
