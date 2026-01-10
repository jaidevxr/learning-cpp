#include <bits/stdc++.h>
using namespace std;

/*
Program to reverse a string
Time Complexity: O(n)
*/
 /*
int main() {
    string s;
    getline(cin, s);

    int i = 0, j = s.size() - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    cout << s;
    return 0;
}
*/

/*
Program to check palindrome
Time Complexity: O(n)
*/
 /*
int main() {
    string s;
    getline(cin, s);

    int i = 0, j = s.size() - 1;
    bool palindrome = true;

    while (i < j) {
        if (s[i] != s[j]) {
            palindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
*/

/*
Program to count vowels and consonants
Time Complexity: O(n)
*/
 /*
int main() {
    string s;
    getline(cin, s);

    int vowels = 0, consonants = 0;

    for (char ch : s) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    return 0;
}
*/

/*
Program to convert string to uppercase
Time Complexity: O(n)
*/
 /*
int main() {
    string s;
    getline(cin, s);

    for (char &ch : s) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
    }

    cout << s;
    return 0;
}
*/

/*
Program to count words in a string
(single pass, no brute force)
Time Complexity: O(n)
*/
 /*
int main() {
    string s;
    getline(cin, s);

    int words = 0;
    bool insideWord = false;

    for (char ch : s) {
        if (ch != ' ' && !insideWord) {
            words++;
            insideWord = true;
        }
        if (ch == ' ')
            insideWord = false;
    }

    cout << words;
    return 0;
}
*/

/*
Program to remove spaces from string
Time Complexity: O(n)
*/
 /*
int main() {
    string s, result = "";
    getline(cin, s);

    for (char ch : s) {
        if (ch != ' ')
            result += ch;
    }

    cout << result;
    return 0;
}
*/

/*
Program to replace space with @
Time Complexity: O(n)
*/
 /*
int main() {
    string s;
    getline(cin, s);

    for (char &ch : s) {
        if (ch == ' ')
            ch = '@';
    }

    cout << s;
    return 0;
}
*/

/*
Program to find length of string
Time Complexity: O(n)
*/
 /*
int main() {
    string s;
    getline(cin, s);

    int length = 0;
    for (char ch : s)
        length++;

    cout << length;
    return 0;
}
*/

/*
Program to find character frequency
Time Complexity: O(n)
*/
 /*
int main() {
    string s;
    getline(cin, s);

    int freq[256] = {0};

    for (char ch : s)
        freq[(unsigned char)ch]++;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != ' ')
            cout << (char)i << " : " << freq[i] << endl;
    }

    return 0;
}
*/
