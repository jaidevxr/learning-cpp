#include <bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int>& arr, int m) {

    int n = arr.size();

    if (n < m)
        return -1;

    sort(arr.begin(), arr.end());

    int ans = INT_MAX;

    for (int i = 0; i + m - 1 < n; i++) {
        ans = min(ans, arr[i + m - 1] - arr[i]);
    }

    return ans;
}

int main() {

    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;

    cout << findMinDiff(arr, m);
    return 0;
}
