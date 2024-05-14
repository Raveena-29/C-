#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {
        if (s1 <= 0 || s2 <= 0 || s3 <= 0)
            throw invalid_argument("All sides must be greater than 0.");
        if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1)
            throw invalid_argument("Sum of any two sides must be greater than the third side.");
    }

    double getSide1() const {
        return side1;
    }

    double getSide2() const {
        return side2;
    }

    double getSide3() const {
        return side3;
    }

    double area() const {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double rightAngleArea() const {
        if (side1 * side1 + side2 * side2 == side3 * side3 ||
            side1 * side1 + side3 * side3 == side2 * side2 ||
            side2 * side2 + side3 * side3 == side1 * side1) {
            return (side1 * side2) / 2;
        } else {
            throw invalid_argument("Triangle is not a right-angled triangle.");
        }
    }
};

int main() {
    try {
        double s1, s2, s3;
        cout << "Enter the three sides of the triangle: ";
        cin >> s1 >> s2 >> s3;

        Triangle triangle(s1, s2, s3);

        cout << "\nTriangle sides: " << triangle.getSide1() << ", " << triangle.getSide2() << ", " << triangle.getSide3() << endl;
        cout << "Area using Heron's formula: " << triangle.area() << endl;
        cout << "Area of right-angled triangle: " << triangle.rightAngleArea() << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
