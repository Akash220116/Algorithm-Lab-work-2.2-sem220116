#include <bits/stdc++.h>
using namespace std;

pair<int, int> linearSearch(vector<int>& arr, int t) {
    int op = 0;
    for (int i = 0; i < arr.size(); i++) {
        op++;
        if (arr[i] == t) {
            return {i, op};
        }
    }
    return {-1, op};
}

pair<int, int> binarySearch(vector<int>& arr, int t) {
    int left = 0, right = arr.size() - 1;
    int op = 0;
    while (left <= right) {
        op++;
        int mid = left + (right - left) / 2;
        if (arr[mid] == t) {
            return {mid, op};
        } else if (arr[mid] < t) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return {-1, op};
}

int main() {
    int n, t;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << "Enter the target value: ";
    cin >> t;

    pair<int, int> L = linearSearch(v, t);

    pair<int, int> B = binarySearch(v, t);

    cout << "\nResults:\n";
    cout << "Array size: " << n << endl;
    cout << "Target: " << t << endl;

    if (L.first != -1) {
        cout << "Linear Search: Found at index " << L.first << ", Operations = " << L.second << endl;
    } else {
        cout << "Linear Search: Not found, Operations = " << L.second << endl;
    }

    if (B.first != -1) {
        cout << "Binary Search: Found at index " << B.first << ", Operations = " << B.second << endl;
    } else {
        cout << "Binary Search: Not found, Operations = " << B.second << endl;
    }

    return 0;
}
