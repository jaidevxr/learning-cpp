#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int>& arr) {
    int res = 0;

    for (int i = 1; i < arr.size() - 1; i++) {

        int left = arr[i];
        for (int j = 0; j < i; j++)
            left = max(left, arr[j]);

  
        int right = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
            right = max(right, arr[j]);

        res += (min(left, right) - arr[i]);
    }

    return res;
}

int main() {
    vector<int> arr = { 2, 1, 5, 3, 1, 0, 4 };
    cout << maxWater(arr);
    return 0;
}