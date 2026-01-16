#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[100], b[100];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    unordered_set<int> s(a, a + n);
    unordered_set<int> result;

    for (int i = 0; i < m; i++) {
        if (s.count(b[i]))
            result.insert(b[i]);
    }

    for (int x : result)
        cout << x << " ";
}