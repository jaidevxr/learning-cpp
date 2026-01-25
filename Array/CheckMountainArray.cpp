#include <bits/stdc++.h>
using namespace std;

bool isMountainArray(vector<int>& arr) {
    int n = arr.size();
    int i = 0;

    while (i + 1 < n && arr[i] < arr[i + 1]) i++;
    if (i == 0 || i == n - 1) return false;

    while (i + 1 < n && arr[i] > arr[i + 1]) i++;
    return i == n - 1;
}

int main() {
    vector<int> arr = {1,3,5,4,2};
    cout << (isMountainArray(arr) ? "true" : "false");
}
