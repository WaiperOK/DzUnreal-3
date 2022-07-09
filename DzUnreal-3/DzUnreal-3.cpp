#include <iostream>

using std::cout;
using std::cin;

int main() {
    setlocale(LC_ALL, "ru");

    const int SIZE = 3;
    int arr[SIZE];
    bool equalnumshere = false;

    cout << "Введите первое число:";
    cin >> arr[0];
    cout << "Введите второе число:";
    cin >> arr[1];
    cout << "Введите третье число:";
    cin >> arr[2];

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[j] == arr[i]) {
                equalnumshere = true;
                break;
            }
        }
    }

    if (!equalnumshere) {
        cout << "Нет равных чисел!";
    }
    else if (equalnumshere) {
        int i = 0;
        while (i <= SIZE - 1) {
            cout << arr[i] + 5 << std::endl;
            i++;
        }
    }
}
