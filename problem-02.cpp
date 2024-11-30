#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int target = 7,low=0,high=arr.size()-1,result=-1;
while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result= mid;break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
