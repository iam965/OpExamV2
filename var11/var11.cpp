#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string readFile(){
    ifstream fin;
    fin.open("file1.txt");
    string str = "";
    while(!fin.eof()) {
        string str1 = "";
        getline(fin, str1);
        str += str1;
        str += " ";
    }
    fin.close();
    return str;
}

void printWords(string str) {
    int i = 0;
    string tmp = "";
    bool flag = false;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            tmp += str[i];
            if (isdigit(str[i])) {
                flag = true;
            }
        } else {
            if (flag) {
                cout << tmp << endl;
            }
            tmp = "";
            flag = false;
        }
        i++;
    }
}

int main(){
    string str = readFile();
    printWords(str);
    return 0;
}