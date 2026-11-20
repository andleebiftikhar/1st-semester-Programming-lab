#include <iostream>
using namespace std;

int main() {
    // Declare two integer variables
    int num1, num2;

    // Take input from the user
    cout << "Enter first integer number: ";
    cin >> num1;

    cout << "Enter second integer number: ";
    cin >> num2;

    // Perform calculations
    int remainder = num1 % num2;
    double average = (num1 + num2) / 2.0;
    int square1 = num1 * num1;
    int square2 = num2 * num2;

    // Display the results
    cout << "\n--- Results ---" << endl;
    cout << "Remainder of both numbers: " << remainder << endl;
    cout << "Average of both numbers: " << average << endl;
    cout << "Square of the first number: " << square1 << endl;
    cout << "Square of the second number: " << square2 << endl;

    return 0;
}
