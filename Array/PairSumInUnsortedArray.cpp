#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int arr[] = {3, 1, 7, 4};
    int n = 4;
    int target = 8;

    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        int need = target - arr[i];

        if (seen.find(need) != seen.end()) {
            cout << "Pair found: " << arr[i] << " and " << need;
            return 0;
        }

        seen.insert(arr[i]);
    }

    cout << "No pair found";
    return 0;
}
