#include <bits/stdc++.h>
using namespace std;
void findMaxMin(vector<int>& arr, int left, int right, int& maxVal, int& minVal) {
    if (left == right) {
        maxVal = max(maxVal, arr[left]);
        minVal = min(minVal, arr[left]);
        return;
    }

    if (right == left + 1) {
        maxVal = max(maxVal, max(arr[left], arr[right]));
        minVal = min(minVal, min(arr[left], arr[right]));
        return;
    }

    int mid = left + (right - left) / 2;
    findMaxMin(arr, left, mid, maxVal, minVal);
    findMaxMin(arr, mid + 1, right, maxVal, minVal);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}

    int maxVal = arr[0];
    int minVal =arr[0] ;
    findMaxMin(arr, 0, n - 1, maxVal, minVal);

    cout << "Maximum Value: " << maxVal << endl;
    cout << "Minimum Value: " << minVal << endl;

    return 0;
}
