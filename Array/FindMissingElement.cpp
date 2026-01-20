#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {

    int n = nums.size();
    int xr = 0;

    for (int i = 0; i <= n; i++)
        xr ^= i;

    for (int num : nums)
        xr ^= num;

    return xr;
}

int main() {

    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums);

    return 0;
}
