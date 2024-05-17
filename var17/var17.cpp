#include <iostream>
using namespace std;

int inputn(){
    int n;
    cout << "n =";
    cin >> n;
    return n;
}

int** createArr(int n) {
    int** arr = new int*[n];
    int i = 0;
    while (i < n) {
        arr[i] = new int[n];
        i++;
    }
    return arr;
}

void fillArr(int** arr, int n) {
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            arr[i][j] = rand() % 101;
            j++;
        }
        i++;
    }
}

void printArr(int** arr, int n) {
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            cout.width(4);
            cout << arr[i][j];
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
}

bool checkNumber(int** arr, int number, int n) {
    int i = 1;
    bool check = true;
    while (i < n && check) {
        int j = 0;
        check = false;
        while (j < n) {
            if (arr[i][j] == number) {
                check = true;
            }
            j++;
        }
        i++;
    }
    return check;
}

int count(int** arr, int n) {
    int k = 0, j = 0;
    while (j < n) {
        bool check = checkNumber(arr, arr[0][j], n);
        if (check) {
            k++;
        }
        j++;
    }
    return k;
}

int* getRepeat(int** arr, int n, int k) {
    int* arr1 = new int[k];
    int l = 0;
    while (l < k) {
        int j = 0;
        while (j < n) {
            bool check = checkNumber(arr, arr[0][j], n);
            if (check) {
                arr1[l] = arr[0][j];
                l++;
            }
            j++;
        }
    }
    return arr1;
}

void printRepeat(int* arr1, int k) {
    int i = 0;
    while (i < k) {
        cout.width(4);
        cout << arr1[i];
        i++;
    }
}

void clean1(int* arr1) {
    delete[] arr1;
    arr1 = nullptr;
}

void checkCount(int k, int** arr, int n) {
    if (k == 0) {
        cout << "Нет чисел, встречающихся в каждой строке" << endl;
    } else {
        int* arr1 = getRepeat(arr, n, k);
        printRepeat(arr1, k);
        clean1(arr1);
    }
}

void clean2(int** arr, int n){
    int i = 0;
    while (i < n) {
        delete[] arr[i];
        i++;
    }
    delete[] arr;
    arr = nullptr;
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int n = inputn();
    int** arr = createArr(n);
    fillArr(arr, n);
    printArr(arr, n);
    int k = count(arr, n);
    checkCount(k, arr, n);
    clean2(arr, n);
    return 0;
}