#include <iostream>
using namespace std;

int main(void) {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);

    int *ptr = vector; 
    int *end = vector + n; 
    int minValue = *ptr; 

    for (; ptr < end; ptr++) {
        if (*ptr < minValue) {
            minValue = *ptr;
        }
    }

    cout << "Найменший елемент: " << minValue << endl;
    return 0;
    /* const int size = 10;
    int matrix[size][size] = {0};
    
    int *ptr = &matrix[0][0]; // Вказівник на перший елемент масиву
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            *(ptr + i * size + j) = (i + 1) * (j + 1); // Заповнення таблиці множення
        }
    }
    
    // Виведення таблиці множення
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << *(ptr + i * size + j) << "\t";
        }
        std::cout << std::endl;
    }
    
    return 0;*/
}
