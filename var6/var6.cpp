//#include <iostream>
//using namespace std;
//
//double input() {
//    double a;
//    cout << "A =";
//    cin >> a;
//    return a;
//}
//
//double getNext(int n) {
//    return (double)1 / n;
//}
//
//int cycle(double a, double &number) {
//    int n = 0;
//    while (number < a) {
//        n++;
//        number += getNext(n);
//    }
//    return n;
//}
//
//void output(int n, double number) {
//    cout << "Число равно " << number << ", его номер " << n << endl;
//}
//
//int main() {
//    double a = input();
//    if (a < 1) {
//        cout << "А должно быть больше 1" << endl;
//    } else {
//        double number = 0;
//        int n = cycle(a, number);
//        output (n, number);
//    }
//    return 0;
//}