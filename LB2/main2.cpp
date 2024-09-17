#include <iostream>
#include <cmath>  

double calculateY(double x, double a, double b, double c) {
    double y;
    
    if (b < 5) {
        y = pow(4 - x, a * b);  
    } else if (b >= c) {
        y = 0.25 + b * c;
    } else {
        y = 0;  
    }
    
    return y;
}

int main() {
    double x, a, b, c;
    std::cout << "Enter: x, a, b, c: ";
    std::cin >> x >> a >> b >> c;

    double y = calculateY(x, a, b, c);
    std::cout << "Value Y: " << y << std::endl;

    return 0;
}
