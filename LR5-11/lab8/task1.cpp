#include <iostream>
#include <algorithm>  
using namespace std;

int main() {
    const int size = 12;  // Задаємо розмір масиву як 12
    int m[size];          // Створюємо масив цілих чисел m з 12 елементів

    // Введення масиву користувачем
    cout << "Enter 12 integers for the array: ";  
    for (int i = 0; i < size; i++) {              
        cin >> m[i];                              // Зчитуємо значення, введене користувачем, і зберігаємо його в m[i]
    }

    // Сортування за зростанням
    sort(m, m + size);                            
    cout << "Array in ascending order: ";         // Виводимо повідомлення про порядок зростання
    for (int i = 0; i < size; i++) {             
        cout << m[i] << " ";                      // Виводимо поточний елемент масиву та пробіл
    }
    cout << endl;                                 // Перехід на новий рядок після виведення масиву

    // Сортування за спаданням
    sort(m, m + size, greater<int>());            // Сортуємо масив у порядку спадання за допомогою greater<int>()
    cout << "Array in descending order: ";        
    for (int i = 0; i < size; i++) {              
        cout << m[i] << " ";                      
    }
    cout << endl;                                 

    return 0;                                     
}
