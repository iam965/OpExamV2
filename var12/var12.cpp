//#include <iostream>
//#include <fstream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//string readFile(){
//    ifstream fin;
//    fin.open("f.txt");
//    string str = "";
//    while(!fin.eof()) {
//        string str1 = "";
//        getline(fin, str1);
//        str += str1;
//        str += " ";
//    }
//    fin.close();
//    return str;
//}
//
//int countNumbers(string str) {
//    int i = 0, n = 0;
//    while (str[i] != '\0') {
//        if (str[i] == ' ') {
//            n++;
//        }
//        i++;
//    }
//    return n;
//}
//
//int* getNumbers(string str, int n) {
//    int i = 0;
//    int* numbers = new int[n];
//    int k = 0;
//    string tmp = "";
//    while (str[i] != '\0') {
//        if (str[i] != ' ') {
//            tmp += str[i];
//        } else {
//            numbers[k] = stoi(tmp);
//            k++;
//            tmp = "";
//        }
//        i++;
//    }
//    return numbers;
//}
//
//string getBinNum(int num) {
//    string binNum = "";
//    while (num != 0) {
//        binNum += to_string(num % 2);
//        num /= 2;
//    }
//    reverse(binNum.begin(), binNum.end());
//    return binNum;
//}
//
//string* binaryNums(int* numbers, int n) {
//    string* binNumbers = new string[n];
//    int i = 0;
//    while (i < n) {
//        binNumbers[i] = getBinNum(numbers[i]);
//        i++;
//    }
//    return binNumbers;
//}
//
//void writeFile(string* binNumbers, int n) {
//    ofstream fout;
//    fout.open("g.txt", ios_base::out | ios_base::trunc);
//    int i = 0;
//    while (i < n) {
//        fout << binNumbers[i] << endl;
//        i++;
//    }
//    fout.close();
//}
//
//void cleanMem(int* numbers, string* binNumbers) {
//    delete[] numbers;
//    numbers = nullptr;
//    delete[] binNumbers;
//    binNumbers = nullptr;
//}
//
//int main() {
//    string str = readFile();
//    int n = countNumbers(str);
//    int* numbers = getNumbers(str, n);
//    string* binNumbers = binaryNums(numbers, n);
//    writeFile(binNumbers, n);
//    cleanMem(numbers, binNumbers);
//    return 0;
//}