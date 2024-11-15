#include <iostream>
#include <Windows.h>
using namespace std;

struct BigNumber {
    int array[9];
};

int combine(const BigNumber& x, int size) {
    int number = 0;
    for (int i = 0; i < size; i++) {
        number = number * 10 + x.array[i];
    }
    return number;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    BigNumber num;
    cout << "Введіть цифри для 9-ти значного числа(через пропуск): ";
    for (int i = 0; i < 9; i++) {
        cin >> num.array[i];
    }
    int number = combine(num, 9);
    cout << number << endl;
    int x, y;
    cout << "Введіть число для додавання: " <<endl;
    cin >> x;
    cout << "Введіть число для віднімання: " <<endl;
    cin >> y;
    int plus = number + x;
    int minus = number - y;
    cout << "Число після операції додавання" <<plus << endl;
    cout << "Число після операції віднімання: " <<minus << endl;

    return 0;
}
