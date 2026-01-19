#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {

    int left = 0;
    int right = height.size() - 1;
    int ans = 0;

    while (left < right) {

        int h = min(height[left], height[right]);
        int w = right - left;

        ans = max(ans, h * w);

        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return ans;
}

int main() {

    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height);

    return 0;
}
