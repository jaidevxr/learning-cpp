
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> st;
    int l = 0, maxLen = 0;

    for (int r = 0; r < s.size(); r++) {
        while (st.count(s[r])) {
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);
        maxLen = max(maxLen, r - l + 1);
    }

    cout << maxLen;
}
