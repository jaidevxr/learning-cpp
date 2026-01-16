
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> k;

    k = k % n;

    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}