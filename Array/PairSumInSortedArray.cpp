#include <iostream>
using namespace std;

int main(){
    int n,target;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements:\n";
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout << "Enter target sum: ";
    cin >> target;
    int left = 0, right = n - 1;
    bool found = false;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Pair found: " << arr[left] << " " << arr[right];
            found = true;
            break;
        } else if (sum < target)
            left++;
        else
            right--;
    }

    if (!found)
        cout << "No pair found";

    return 0;
}