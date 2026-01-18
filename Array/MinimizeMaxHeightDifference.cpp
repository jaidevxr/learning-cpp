#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int getMinDiff(vector<int> &arr, int k) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int res = arr[n - 1] - arr[0];

    // For all indices i, increment
    // arr[0...i-1] by k and decrement and arr[i...n-1] by k
    for (int i = 1; i < n; i++) {
        
        // Impossible to decrement
        // height of ith tower by k, continue
        if (arr[i] - k < 0)
            continue;

        int minH = min(arr[0] + k, arr[i] - k);
        int maxH = max(arr[i - 1] + k, arr[n - 1] - k);
        res = min(res, maxH - minH);
    }

    return res;
}

int main() {
    int k = 2;
    vector<int> arr = {1, 5, 8, 10};

    int ans = getMinDiff(arr, k);
    cout << ans;

    return 0;
}