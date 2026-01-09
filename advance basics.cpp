#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;



// Linear Search
int linearSearch(vector<int> arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// Binary Search (array must be sorted)
int binarySearch(vector<int> arr, int key) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// Reverse Array
void reverseArray(vector<int>& arr) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        swap(arr[l], arr[r]);
        l++; r--;
    }
}

// Find Max & Min
void findMaxMin(vector<int> arr) {
    int mx = arr[0], mn = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    cout << "Max: " << mx << ", Min: " << mn << endl;
}

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

/* ---------- MAIN ---------- */

int main() {

    cout << "=== DSA Beginner Master Program ===\n";

    //  Array
    vector<int> arr = {5, 2, 9, 1, 3};
    cout << "\nOriginal Array: ";
    for (int x : arr) cout << x << " ";

    //  Reverse Array
    reverseArray(arr);
    cout << "\nReversed Array: ";
    for (int x : arr) cout << x << " ";

    //  Max & Min
    cout << "\n";
    findMaxMin(arr);

    //  Sorting
    bubbleSort(arr);
    cout << "Sorted Array: ";
    for (int x : arr) cout << x << " ";

    //  Linear Search
    int key = 3;
    cout << "\nLinear Search (3): Index = "
         << linearSearch(arr, key) << endl;

    //  Binary Search
    cout << "Binary Search (3): Index = "
         << binarySearch(arr, key) << endl;

    // 7Stack (LIFO)
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "\nStack Top: " << st.top() << endl;
    st.pop();
    cout << "Stack Top after pop: " << st.top() << endl;

    // 8️ Queue (FIFO)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "\nQueue Front: " << q.front() << endl;
    q.pop();
    cout << "Queue Front after pop: " << q.front() << endl;

    // 9 STL Algorithms
    cout << "\nUsing STL:" << endl;
    cout << "Max Element: " << *max_element(arr.begin(), arr.end()) << endl;
    cout << "Min Element: " << *min_element(arr.begin(), arr.end()) << endl;

    //  Prefix Sum
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    cout << "Prefix Sum: ";
    for (int x : prefix) cout << x << " ";

    cout << "\n\n=== End ===";
    return 0;
}
