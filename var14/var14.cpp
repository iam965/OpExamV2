//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct point {
//    double x, y, z;
//};
//
//double length(point a, point b) {
//    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
//}
//
//double per(double a, double b, double c) {
//    return (a + b + c) / 2;
//}
//
//double square(point a, point b, point c) {
//    double ab, bc, ac;
//    ab = length(a, b);
//    bc = length(b, c);
//    ac = length(a, c);
//    double p = per(ab, bc, ac);
//    return sqrt(p * (p - ab) * (p - bc) * (p - ac));
//}
//
//point input(char info) {
//    point tmp;
//    cout << "Ввод точки " << info << endl;
//    cout << "Введите X:";
//    cin >> tmp.x;
//    cout << "Введите Y:";
//    cin >> tmp.y;
//    cout << "Введите Z:";
//    cin >> tmp.z;
//    return tmp;
//}
//
//void check(double s) {
//    if (s == 0) {
//        cout << "Треугольник не существует" << endl;
//    } else {
//        cout << "S = " << s << endl;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    point a, b, c;
//    a = input('A');
//    b = input('B');
//    c = input('C');
//    double s = square(a, b ,c);
//    check(s);
//    return 0;
//}