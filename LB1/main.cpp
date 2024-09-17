#include <iostream>
#include <cmath> 

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
//double y = (1.3 * sin(a) + cos(b)) / (0.81 * sin(b) + 1.1 * cos(a)) * exp(log(b / a));
