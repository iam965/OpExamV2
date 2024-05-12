#include <iostream>
#include <string>
using namespace std;

struct student{
    string surname, name, fathername;
    int course;
    double mark;

    student(){
        surname = "";
        name = "";
        fathername = "";
        course = 1;
        mark = 5;
    }

    student(string srn, string nm, string fn, int c, double m) {
        surname = srn;
        name = nm;
        fathername = fn;
        course = c;
        mark = m;
    }

    void print() {
        cout << surname << " " << name << " " << fathername << " " << course << " " << mark << endl;
    }
};

int inputn() {
    int n;
    cout << "Введите количество студентов:";
    cin >> n;
    return n;
}

string getSurname() {
    string srn[] = {"Петров", "Путин", "Долгополов", "Пригожин"};
    string tmp = srn[rand() % 4];
    return tmp;
}

string getName() {
    string rn[] = {"Андрей", "Владимир", "Илья", "Евгений"};
    string tmp = rn[rand() % 4];
    return tmp;
}

string getFathername() {
    string srn[] = {"Антонович", "Владимирович", "Александрович", "Викторович"};
    string tmp = srn[rand() % 4];
    return tmp;
}

int getCourse() {
    return rand() % 5 + 1;
}

double getMark() {
    return (double)(rand() % 300 + 200) / 100;
}

student generate() {
    student tmp(getSurname(), getName(), getFathername(), getCourse(), getMark());
    return tmp;
}

student* getArr(int n){
    student* arr = new student[n];
    int i = 0;
    while (i < n) {
        arr[i] = generate();
        i++;
    }
    return arr;
}

void printArr(student* arr, int n) {
    int i = 0;
    while (i < n) {
        arr[i].print();
        i++;
    }
}

int* count(student* arr, int n, bool &flag) {
    int* arr1 = new int[5];
    int i = 0;
    while (i < 5) {
        arr1[i] = 0;
        i++;
    }
    i = 0;
    while (i < n) {
        if (arr[i].mark < 3) {
            arr1[arr[i].course - 1]++;
            flag = true;
        }
        i++;
    }
    return arr1;
}

void cleanMem(student* arr, int* arr1) {
    delete[] arr;
    arr = nullptr;
    delete[] arr1;
    arr1 = nullptr;
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int n = inputn();
    student* arr = getArr(n);
    printArr(arr, n);
    bool flag = false;
    int* arr1 = count(arr, n, flag);
    cleanMem(arr, arr1);
    return 0;
}