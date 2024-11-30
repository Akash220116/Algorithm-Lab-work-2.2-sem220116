#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, target;

    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements (sorted or unsorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << "Enter the target value to search: ";
    cin >> target;
    int index = binarySearch(arr, target);
    if (index != -1) {
        cout << "Target " << target << " found at index " << index << " (0-based index)." << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}

