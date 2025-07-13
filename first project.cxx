#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void displayMenu() {
    cout << "\n=== Modern Calculator ===\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "0. Exit\n";
    cout << "Enter Your Choice: ";
}

int main() {
    int choice;
    double a, b, result;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Two Numbers: ";
                cin >> a >> b;
                result = a + b;
                cout << "Result: " << result << "\n";
                break;

            case 2:
                cout << "Enter Two Numbers: ";
                cin >> a >> b;
                result = a - b;
                cout << "Result: " << result << "\n";
                break;

            case 3:
                cout << "Enter Two Numbers: ";
                cin >> a >> b;
                result = a * b; // 💥 FIXED
                cout << "Result: " << result << "\n";
                break;

            case 4:
                cout << "Enter Two Numbers: ";
                cin >> a >> b;
                if (b != 0) {
                    result = a / b; // 💥 FIXED
                    cout << "Result: " << result << "\n";
                } else {
                    cout << "Error: Division by zero is not allowed!\n";
                }
                break;

            case 0:
                cout << "Thanks for using the calculator. Bye!\n";
                break;

            default:
                cout << "Invalid input. Please try again.\n";
                break;
        }

    } while (choice != 0);

    return 0;
} 