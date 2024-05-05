//#include <iostream>
//#include <cmath>
//using namespace std;
//
//double input(string info) {
//    double a;
//    cout << info;
//    cin >> a;
//    return a;
//}
//
//template <typename type>
//void output(type a, type b) {
//    cout.width(10);
//    cout << a;
//    cout.width(10);
//    cout << b;
//    cout << endl;
//}
//
//void output(double sum) {
//    cout << "sum = " << sum << endl;
//}
//
//double function(double x) {
//    return 5 * pow(x, 3) + 3 * pow(x, 2) + x - 10 * cos(2 * x) - 1;
//}
//
//double findSum(int n, double step, double x0, int z) {
//    double x = x0;
//    double sum = 0;
//    output("x", "y");
//    while (x < (x0 + step * n)) {
//        double y = function(x);
//        output(x, y);
//        int c = (int)y;
//        if (c % z == 0) {
//            sum += y;
//        }
//        x += step;
//    }
//    return sum;
//}
//
//int main() {
//    int n = input("n =");
//    double x0 = input("x0 =");
//    double step = input("step =");
//    int z = input("z =");
//    double sum = findSum(n, step, x0, z);
//    output(sum);
//    return 0;
//}