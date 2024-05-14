#include <iostream>
using namespace std;

// GCD with recursion
int gcdRecursive(int a, int b) {
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}

// GCD without recursion
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // GCD with recursion
    cout << "GCD of " << num1 << " and " << num2 << " using recursion is: " << gcdRecursive(num1, num2) << endl;

    // GCD without recursion
    cout << "GCD of " << num1 << " and " << num2 << " without recursion is: " << gcd(num1, num2) << endl;

    return 0;
}
