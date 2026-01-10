#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/* Function declaration */
int add(int a, int b);

int main() {

    // Output
    cout << "=== C++ Beginner Master Program ===" << endl;

    // Variables & Data Types
    int age = 20;
    float height = 5.9;
    double pi = 3.14159;
    char grade = 'A';
    bool isStudent = true;
    string name = "Jaidev";

    // Input
    cout << "\nEnter your age: ";
    cin >> age;

    cout << "Enter your name: ";
    cin >> name;

    // Output with variables
    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;

    // Operators
    int a = 10, b = 3;
    cout << "\nArithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    //If-Else
    if (age >= 18) {
        cout << "\nYou are eligible to vote." << endl;
    } else {
        cout << "\nYou are not eligible to vote." << endl;
    }

    // Switch Case
    int day = 3;
    cout << "\nSwitch Case Example:" << endl;
    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        default: cout << "Invalid Day";
    }
    cout << endl;

    //Loops
    cout << "\nFor Loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "\nWhile Loop:" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    cout << "\nDo-While Loop:" << endl;
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= 5);
    cout << endl;

    //  Arrays
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "\nArray Elements:" << endl;
    for (int k = 0; k < 5; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    // Functions
    cout << "\nFunction Call (Add): " << add(5, 7) << endl;

    //Math Functions
    cout << "\nMath Functions:" << endl;
    cout << "Square root of 25: " << sqrt(25) << endl;
    cout << "Power (2^3): " << pow(2, 3) << endl;

    // Ternary Operator
    int x = 5, y = 10;
    int max = (x > y) ? x : y;
    cout << "\nGreater number is: " << max << endl;

    // Break & Continue
    cout << "\nBreak & Continue:" << endl;
    for (int n = 1; n <= 10; n++) {
        if (n == 5) continue;
        if (n == 8) break;
        cout << n << " ";
    }
    cout << endl;

    cout << "\n=== Program End ===" << endl;

    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}
