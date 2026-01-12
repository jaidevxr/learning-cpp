#include <bits/stdc++.h>
using namespace std;
/*
Binary Search (Optimal)
Best case: O(1)
Worst case: O(log n)
*/
int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            cout << "Found at index " << mid;
            found = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Not Found";

    return 0;
}