/*
CONDITIONS:
- Subarray must be CONTIGUOUS
- Array can contain negative and zero
- Find MAXIMUM PRODUCT
- Time: O(n), Space: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxProd = arr[0];
    int minProd = arr[0];
    int ans = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0)
            swap(maxProd, minProd);

        maxProd = max(arr[i], maxProd * arr[i]);
        minProd = min(arr[i], minProd * arr[i]);

        ans = max(ans, maxProd);
    }

    cout << "Maximum product subarray: " << ans;
    return 0;
}
