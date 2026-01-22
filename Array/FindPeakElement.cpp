#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1,2,3,1};
    int l = 0, r = nums.size() - 1;

    while (l < r) {
        int mid = (l + r) / 2;
        if (nums[mid] < nums[mid + 1])
            l = mid + 1;
        else
            r = mid;
    }

    cout << l;
}
