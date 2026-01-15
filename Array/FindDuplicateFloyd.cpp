/*
CONDITIONS:
- Array size = n + 1
- Values range from 1 to n
- Exactly ONE duplicate
- Do NOT modify array
- Time: O(n), Space: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int slow = arr[0], fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    cout << slow;
}
