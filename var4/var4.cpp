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
//void output(double max, bool flag) {
//    if (flag) {
//        cout << "max = " << max << endl;
//    } else {
//        cout << "No max";
//    }
//}
//
//double function(double x) {
//    return 5 * pow(x, 3) + 3 * pow(x, 2) + x - 10 * cos(2 * x) - 1;
//}
//
//double findSum(int n, double step, double x0, bool &flag) {
//    double x = x0;
//    double max = 0;
//    output("x", "y");
//    while (x < (x0 + step * n)) {
//        double y = function(x);
//        output(x, y);
//        int c = (int)y;
//        if (c % 2 == 0) {
//            if (!flag) {
//                flag = true;
//                max = y;
//            } else {
//                if (y > max) {
//                    max = y;
//                }
//            }
//        }
//        x += step;
//    }
//    return max;
//}
//
//int main() {
//    int n = input("n =");
//    double x0 = input("x0 =");
//    double step = input("step =");
//    bool flag = false;
//    double max = findSum(n, step, x0, flag);
//    output(max, flag);
//    return 0;
//}