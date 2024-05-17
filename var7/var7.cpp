#include <iostream>
using namespace std;

int getNumber() {
    int n;
    cout << "Введите число: ";
    cin >> n;
    return n;
}

int checkMax(int n, int max) {
    if (n > max) {
        return n;
    } else {
        return max;
    }
}

char cont() {
    char k = ' ';
    cout << "Продолжить? y/n" << endl;
    while (k != 'y' && k != 'n') {
        cin.get(k);
        if (k != 'y' && k != 'n') {
            cout << "Введите y/n" << endl;
        }
    }
    return k;
}

void output(int max) {
    cout << "Максимальное введенное число равно " << max << endl;
}

int main() {
    char key = ' ';
    int max;
    while (key != 'n') {
        int n = getNumber();
        max = checkMax(n, max);
        key = cont();
    }
    output(max);
    return 0;
}