#include <iostream>
using namespace std;

int main() {
    const int m = 4; // кількість рядків
    const int n = 3; // кількість стовпців
    int array[m][n];

    // Введення значень масиву користувачем
    cout << "Enter the elements of the array (" << m << " rows and " << n << " columns):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> array[i][j];
        }
    }

    // Обчислення кількості парних чисел у кожному рядку
    for (int i = 0; i < m; i++) {
        int evenCount = 0; // лічильник парних чисел у рядку
        for (int j = 0; j < n; j++) {
            if (array[i][j] % 2 == 0) { // перевірка, чи число парне
                evenCount++;
            }
        }
        cout << "Row " << i + 1 << ": even numbers count = " << evenCount << endl; // виведення результату для кожного рядка
    }

    return 0;
}
