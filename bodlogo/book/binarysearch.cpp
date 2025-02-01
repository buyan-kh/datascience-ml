#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (target > arr[mid]) {
            left = mid + 1;
        }
        else if (target < arr[mid]) {
            right = mid - 1;
        }
        else return mid;
    }
    return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 20, 30};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, n, x);
    if (result == -1) cout << "no element" << endl;
    else cout << result << endl;
    return 0;
}