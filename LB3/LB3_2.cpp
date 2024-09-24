#include <iostream>

int main() {
    int modelNumber;

    std::cout << "Enter the car model number (from 1 to 4): ";
    std::cin >> modelNumber;

    switch (modelNumber) {
        case 1:
            std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
            std::cout << "| Car Model: BMW 525I         |" << std::endl;
            std::cout << "| Year: 2015                  |" << std::endl;
            std::cout << "| Engine Capacity: 2.5 liters |" << std::endl;
            std::cout << "| Fuel Type: Gasoline         |" << std::endl;
            std::cout << "| Color: Black                |" << std::endl;
            std::cout << "| Price: 20000 USD            |" << std::endl;
            std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
            break;
        case 2:
            std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
            std::cout << "| Car Model: Audi A6          |" << std::endl;
            std::cout << "| Year: 2018                  |" << std::endl;
            std::cout << "| Engine Capacity: 2.0 liters |" << std::endl;
            std::cout << "| Fuel Type: Diesel           |" << std::endl;
            std::cout << "| Color: Gray                 |" << std::endl;
            std::cout << "| Price: 25000 USD            |" << std::endl;
            std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
            break;
        case 3:
            std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=" << std::endl;
            std::cout << "| Car Model: Mercedes-Benz E-Class |" << std::endl;
            std::cout << "| Year: 2019                       |" << std::endl;
            std::cout << "| Engine Capacity: 3.0 liters      |" << std::endl;
            std::cout << "| Fuel Type: Gasoline              |" << std::endl;
            std::cout << "| Color: White                     |" << std::endl;
            std::cout << "| Price: 30000 USD                 |" << std::endl;
            std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
            break;
        case 4:
            std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
            std::cout << "| Car Model: Tesla Model 3    |" << std::endl;
            std::cout << "| Year: 2021                  |" << std::endl;
            std::cout << "| Engine Type: Electric       |" << std::endl;
            std::cout << "| Range: 500 km               |" << std::endl;
            std::cout << "| Color: Red                  |" << std::endl;
            std::cout << "| Price: 35000 USD            |" << std::endl;
            std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
            break;
        default:
            std::cout << "Invalid model number. Please enter a number between 1 and 4." << std::endl;
            break;
    }

    return 0;
}
