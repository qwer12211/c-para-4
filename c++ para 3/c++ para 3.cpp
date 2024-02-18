#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int dorosgka = 3;
    const int stolbech = 5;
    double arr[dorosgka][stolbech];

    // Ввод элементов массива с клавиатуры
    for (int i = 0; i < dorosgka; i++) {
        cout << "Введите элементы строки " << i + 1 << " через пробел ";
        for (int j = 0; j < stolbech; j++) {
            cin >> arr[i][j];
        }
    }

    // Вычисление среднего арифметического для каждой строки
    for (int i = 0; i < dorosgka; i++) {
        double sum = 0;
        for (int j = 0; j < stolbech; j++) {
            sum += arr[i][j];
        }
        double average = sum / stolbech;
        cout << "Среднее арифметическое равно " << i + 1 << ": " << average << endl;
    }

    return 0;
}
