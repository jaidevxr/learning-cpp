#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int price[100];
    for (int i = 0; i < n; i++) cin >> price[i];

    int minPrice = price[0], maxProfit = 0;

    for (int i = 1; i < n; i++) {
        minPrice = min(minPrice, price[i]);
        maxProfit = max(maxProfit, price[i] - minPrice);
    }

    cout << maxProfit;
}
