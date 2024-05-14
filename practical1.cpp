//Write a program to compute the sum of the first n terms of the following series:The number of terms n is to be taken from the user through the command line. If the command line argument is not found then prompt the user to enter the value of n


#include <iostream>
#include <cstdlib>
using namespace std;

double seriesSum(int n) {
    double sum = 0;
    int sign = 1;
    for (int i = 1; i <= n; i++) {
        sum += sign * (1.0 / i);
        sign = -sign;
    }
    return sum;
}

int main(int argc, char *argv[]) {
    int n;
    if (argc == 2) {
        n = atoi(argv[1]);
    } else {
        cout << "Enter the number of terms (n): ";
        cin >> n;
    }

    if (n <= 0) {
        cout << "Number of terms should be greater than zero." << endl;
        return 1;
    }

    double sum = seriesSum(n);
    cout << "Sum of the first " << n << " terms of the series: " << sum << endl;

    return 0;
}
