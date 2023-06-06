#include <iostream>
#include <Windows.h>

using namespace std;

int cube(int number) {
    return number * number * number;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    cout << "Введіть число: ";
    cin >> number;

    int result = cube(number);
    cout << "Куб числа " << number << " = " << result << endl;

    return 0;
}
