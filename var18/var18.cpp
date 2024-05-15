//#include <iostream>
//#include <string>
//using namespace std;
//
//string generateString() {
//    string symbols = "QqWwEeRrTtYyUuIiOoPpAaSsDdFfGgHhJjKkLlZzXxCcVvBbNnMm";
//    int len = rand() % 40 + 10;
//    int i = 0;
//    string str = "";
//    while (i < len) {
//        str += symbols[rand() % symbols.length()];
//        i++;
//    }
//    return str;
//}
//
//void output(string info, string str) {
//    cout << info << str << endl;
//}
//
//bool check(string str, int i) {
//    char c = str[i];
//    int k = 0;
//    bool flag = true;
//    while (k < str.length() && flag) {
//        if (k != i && c == str[k]) {
//            flag = false;
//        }
//        k++;
//    }
//    return flag;
//}
//
//string getNewString(string str) {
//    string newStr = "";
//    int i = 0;
//    while (i < str.length()) {
//        if(check(str, i)) {
//            newStr += str[i];
//        }
//        i++;
//    }
//    return newStr;
//}
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    srand(time(NULL));
//    string str = generateString();
//    output("Изначальная строка: ", str);
//    string newStr = getNewString(str);
//    output("Новая строка: ", newStr);
//    return 0;
//}