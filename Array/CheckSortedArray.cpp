#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr) {
    bool inc = true, dec = true;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) inc = false;
        if (arr[i] > arr[i - 1]) dec = false;
    }
    return inc || dec;
}

int main() {
    vector<int> arr = {5, 4, 3, 2};
    cout << (isSorted(arr) ? "true" : "false");
}
