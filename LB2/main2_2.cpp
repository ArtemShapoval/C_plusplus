
#include <iostream>

bool isPointInShadedArea(double x, double y) {
  
    if (x >= -1 && x <= 0 && y >= 0 && y <= 1) {
        return true;
    }
   
    if (x >= 0 && x <= 1 && y >= -1 && y <= 0) {
        return true;
    }
    return false;
}

int main() {
    double x, y;
    std::cout << "Enter (x, y): ";
    std::cin >> x >> y;

    if (isPointInShadedArea(x, y)) {
        std::cout << "Hits." << std::endl;
    } else {
        std::cout << "Does not hits." << std::endl;
    }

    return 0;
}
