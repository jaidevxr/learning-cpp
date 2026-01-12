#include <bits/stdc++.h>
using namespace std;

/*
Linear Search (Optimal)
Best case: O(1)
Worst case: O(n)
*/

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i;
            found = true;
            break;  
        }
    }

    if (!found)
        cout << "Not Found";

    return 0;
}
