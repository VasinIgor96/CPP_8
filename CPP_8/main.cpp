#include <iostream>
#include <Windows.h>

using namespace std;

bool checkPositive(int number) {
    if (number > 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    cout << "Введіть число: ";
    cin >> number;

    if (checkPositive(number)) {
        cout << "Число є додатнім." << endl;
    }
    else {
        cout << "Число є від'ємним." << endl;
    }

    return 0;
}
