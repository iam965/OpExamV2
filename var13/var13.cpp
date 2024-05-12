//#include <iostream>
//#include <string>
//using namespace std;
//
//string input() {
//    string str;
//    cout << "Введите строку:";
//    getline(cin, str);
//    return str;
//}
//
//void print(char k, int n) {
//    cout << "Символ \'" << k << "\' входит в строку " << n << " раз" << endl;
//}
//
//int countSymbol(string &str, char k) {
//    int i = 0, n = 0;
//    while (i < str.length()) {
//        if (str[i] == k) {
//            n++;
//            str.erase(i, 1);
//            i--;
//        }
//        i++;
//    }
//    return n;
//}
//
//void mainCycle(string str) {
//    while (str.length() != 0) {
//        char k = str[0];
//        int n = countSymbol(str, k);
//        print(k, n);
//    }
//}
//
//int main() {
//    string str = input();
//    mainCycle(str);
//    return 0;
//}