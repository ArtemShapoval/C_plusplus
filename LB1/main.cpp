#include <iostream>
#include <cmath> // для математичних функцій

using namespace std;

int main() {
    double a, b;

    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;

    double y = pow( (0.1 * log(exp(3))) / (pow(sin((a/b) * M_PI), 2) + pow(cos((a/b) * M_PI), 2)), 1./3 );

    cout << "Value y: " << y << endl;

    return 0;
}
