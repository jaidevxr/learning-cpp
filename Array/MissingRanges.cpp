#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> missingRanges(vector<int> &arr, int lower, int upper) {
    int n = arr.size();
    vector<vector<int>> res;

    if (lower < arr[0])
        res.push_back({lower, arr[0] - 1});

    for (int i = 0; i < n - 1; ++i)
        if (arr[i + 1] - arr[i] > 1)
            res.push_back({arr[i] + 1, arr[i + 1] - 1});

    if (n > 0 && upper > arr[n - 1])
        res.push_back({arr[n - 1] + 1, upper});

    return res;
}

int main() {
    int lower = 10, upper = 50;
    vector<int> arr{14, 15, 20, 30, 31, 45};
    vector<vector<int>> res = missingRanges(arr, lower, upper);
    for (const vector<int> &v : res)
        cout << v[0] << " " << v[1] << endl;
    return 0;
}