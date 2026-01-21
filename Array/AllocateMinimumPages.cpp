#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& pages, int students, int limit) {
    int cnt = 1, sum = 0;

    for (int p : pages) {
        if (p > limit) return false;
        if (sum + p > limit) {
            cnt++;
            sum = p;
        } else {
            sum += p;
        }
    }
    return cnt <= students;
}

int main() {

    vector<int> pages = {12, 34, 67, 90};
    int students = 2;

    int low = *max_element(pages.begin(), pages.end());
    int high = accumulate(pages.begin(), pages.end(), 0);
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isPossible(pages, students, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans;
}
