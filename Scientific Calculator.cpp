#include <iostream>

using namespace std;

// Function for Addition
double add(double a, double b) {
    return a + b;
}

// Function for Subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function for Multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function for Division with zero check
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
        return 0;
    }
    return a / b;
}

// Function for Exponentiation (x^y)
double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function for Factorial (n!)
int factorial(int num) {
    if (num < 0) {
        cout << "Error: Factorial of a negative number is not defined!" << endl;
        return 0;
    }
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function for Modulus (a % b)
int moduloOperation(int a, int b) {
    if (b == 0) {
        cout << "Error: Modulus by zero is not allowed!" << endl;
        return 0;
    }
    return a % b;
}

// Function for Permutation (nPr)
int permutation(int n, int r) {
    if (r > n || n < 0 || r < 0) {
        cout << "Error: Invalid values for permutation!" << endl;
        return 0;
    }
    return factorial(n) / factorial(n - r);
}

// Function for Combination (nCr)
int combination(int n, int r) {
    if (r > n || n < 0 || r < 0) {
        cout << "Error: Invalid values for combination!" << endl;
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function for Exponential (e^x) using Taylor Series
double exponential(double x) {
    double sum = 1; // Initial term of series (e^0 = 1)
    double term = 1;
    for (int i = 1; i < 20; i++) { // 20 iterations for accuracy
        term *= x / i;
        sum += term;
    }
    return sum;
}

// Function to Convert Degrees to Radians
double degreesToRadians(double degrees) {
    return degrees * (3.141592653589793 / 180);
}

// Function to Convert Radians to Degrees
double radiansToDegrees(double radians) {
    return radians * (180 / 3.141592653589793);
}

// Function for Greatest Common Divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function for Least Common Multiple (LCM) using LCM(a, b) = (a * b) / GCD(a, b)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to Display the Calculator Menu
void calculatorMenu() {
    int choice;
    double num1, num2;
    int intNum1, intNum2;

    do {
        cout << "\n===== Scientific Calculator =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exponentiation (x^y)" << endl;
        cout << "6. Factorial (n!)" << endl;
        cout << "7. Modulus (a % b)" << endl;
        cout << "8. Exponential (e^x)" << endl;
        cout << "9. Degrees to Radians" << endl;
        cout << "10. Radians to Degrees" << endl;
        cout << "11. Greatest Common Divisor (GCD)" << endl;
        cout << "12. Least Common Multiple (LCM)" << endl;
        cout << "13. Permutation (nPr)" << endl;
        cout << "14. Combination (nCr)" << endl;
        cout << "15. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Enter base and exponent: ";
                cin >> num1 >> intNum2;
                cout << "Result: " << power(num1, intNum2) << endl;
                break;
            case 6:
                cout << "Enter an integer: ";
                cin >> intNum1;
                cout << "Result: " << factorial(intNum1) << endl;
                break;
            case 7:
                cout << "Enter two integers: ";
                cin >> intNum1 >> intNum2;
                cout << "Result: " << moduloOperation(intNum1, intNum2) << endl;
                break;
            case 8:
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Exponential (e^x): " << exponential(num1) << endl;
                break;
            case 9:
                cout << "Enter degrees: ";
                cin >> num1;
                cout << "Radians: " << degreesToRadians(num1) << endl;
                break;
            case 10:
                cout << "Enter radians: ";
                cin >> num1;
                cout << "Degrees: " << radiansToDegrees(num1) << endl;
                break;
            case 11:
                cout << "Enter two integers: ";
                cin >> intNum1 >> intNum2;
                cout << "GCD: " << gcd(intNum1, intNum2) << endl;
                break;
            case 12:
                cout << "Enter two integers: ";
                cin >> intNum1 >> intNum2;
                cout << "LCM: " << lcm(intNum1, intNum2) << endl;
                break;
            case 13:
                cout << "Enter n and r: ";
                cin >> intNum1 >> intNum2;
                cout << "Permutation (nPr): " << permutation(intNum1, intNum2) << endl;
                break;
            case 14:
                cout << "Enter n and r: ";
                cin >> intNum1 >> intNum2;
                cout << "Combination (nCr): " << combination(intNum1, intNum2) << endl;
                break;
            case 15:
                cout << "Exiting..." << endl;
                return;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 15);
}

// Main function
int main() {
    calculatorMenu();
    return 0;
}
    
