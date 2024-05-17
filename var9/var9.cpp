//#include <iostream>
//#include <string>
//#include <random>
//using namespace std;
//
//string generate(){
//    string rndString = "1234567890abcdefghjklmopqrstuvxyz";
//    random_device rnd;
//    mt19937 rn(rnd());
//    uniform_int_distribution<int> r1(10,50);
//    uniform_int_distribution<int> r2(0, rndString.length() - 1);
//    int i = 0, n = r1(rn);
//    string str = "";
//    while (i < n) {
//        str += rndString[r2(rn)];
//        i++;
//    }
//    return str;
//}
//
//char inputRule() {
//    char r;
//    cout << "Введите правило:";
//    cin >> r;
//    return r;
//}
//
//string getNewString(string str, char r) {
//    int i = 0, sum = 0;
//    while (i < str.length()) {
//        if (isdigit(str[i]) && str[i] != r) {
//            sum += str[i] - '0';
//        }
//        if (str[i] == r) {
//            str.insert(i, to_string(sum));
//            i += to_string(sum).length();
//            sum = 0;
//        }
//        if (str[i + 1] == '\0') {
//            str.insert(i + 1, to_string(sum));
//            i += to_string(sum).length();
//        }
//        i++;
//    }
//    return str;
//}
//
//int main() {
//    string str = generate();
//    cout << str << endl;
//    char r = inputRule();
//    string newStr = getNewString(str, r);
//    cout << newStr << endl;
//    return 0;
//}
