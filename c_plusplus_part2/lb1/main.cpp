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
}
