//#include <iostream>
//#include <string>
//using namespace std;
//
//int input() {
//    int n;
//    cout << "n =";
//    cin >> n;
//    return n;
//}
//
//int getSum(string str){
//    int sum = 0;
//    int i = 0;
//    while (i < str.length()) {
//        sum += str[i] - '0';
//        i++;
//    }
//    return sum;
//}
//
//void output(string str, int sum) {
//    cout << "Количество цифр = " << str.length() << endl;
//    cout << "Сумма цифр = " << sum << endl;
//    cout << "Первая цифра = " << str[0] << endl;
//}
//
//int main() {
//    int n = input();
//    string str = to_string(n);
//    int sum = getSum(str);
//    output(str, sum);
//    return 0;
//}