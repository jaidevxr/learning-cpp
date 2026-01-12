// Program to print numbers from 1 to N using recursion
#include <iostream>
using namespace std;

void print1toN(int n) {
    if (n == 0) return;
    print1toN(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    print1toN(n);
    return 0;
}



// Program to print numbers from N to 1 using recursion
#include <iostream>
using namespace std;

void printNto1(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    int n;
    cin >> n;
    printNto1(n);
    return 0;
}



// Program to find sum of first N natural numbers using recursion
#include <iostream>
using namespace std;

int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << sumN(n);
    return 0;
}



// Program to find factorial of a number using recursion
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}



// Program to find Fibonacci number using recursion
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}



// Program to check palindrome string using recursion
#include <iostream>
using namespace std;

bool isPalindrome(string s, int i, int j) {
    if (i >= j) return true;
    if (s[i] != s[j]) return false;
    return isPalindrome(s, i + 1, j - 1);
}

int main() {
    string s;
    cin >> s;
    if (isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}



// Program to calculate power of a number using recursion
#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}



// Program to count digits of a number using recursion
#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}



// Program to reverse a number using recursion
#include <iostream>
using namespace std;

int reverseNum(int n, int rev) {
    if (n == 0) return rev;
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int n;
    cin >> n;
    cout << reverseNum(n, 0);
    return 0;
}



// Program to print array elements using recursion
#include <iostream>
using namespace std;

void printArray(int arr[], int n, int i) {
    if (i == n) return;
    cout << arr[i] << " ";
    printArray(arr, n, i + 1);
}

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    printArray(arr, n, 0);
    return 0;
}
