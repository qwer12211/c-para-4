#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int ROWS = 3;
    const int COLS = 5;
    double arr[ROWS][COLS];

    // Ввод элементов массива с клавиатуры
    for (int i = 0; i < ROWS; i++) {
        cout << "Введите элементы строки " << i + 1 << " через пробел ";
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }

    // Вычисление среднего арифметического для каждой строки
    for (int i = 0; i < ROWS; i++) {
        double sum = 0;
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
        double average = sum / COLS;
        cout << "Среднее арифметическое равно " << i + 1 << ": " << average << endl;
    }

    return 0;
}
