#include <iostream>
#include <string>
using namespace std;

int input(string info) {
    int n;
    cout << info;
    cin >> n;
    return n;
}

int main() {
    int x = input("Введите число: ");
    int n = input("Введите систему счисления (2 <= n <= 16):");
    if (n < 2 || n > 16) {
        cout << "Ошибка ввода" << endl;
    } else {
        string digits = "0123456789ABCDEF";
        string str = "";
        while (x > 0) {
            int c = x % n;
            str += digits[c];
            x /= n;
        }
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
    return 0;
}