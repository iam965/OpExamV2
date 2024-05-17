#include <iostream>
using namespace std;

int input() {
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

void cleanMem(int** arr, int n) {
    int i = 0;
    while (i < n) {
        delete[] arr[i];
        i++;
    }
    delete[] arr;
    arr = nullptr;
}

void fillArr(int** arr, int n) {
    srand(time(NULL));
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            arr[i][j] = rand() % 100;
            j++;
        }
        i++;
    }
}

void swap(int** arr, int i, int a, int b) {
    int tmp = arr[i][a];
    arr[i][a] = arr[i][b];
    arr[i][b] = tmp;
}

void swapArr(int** arr, int n) {
    int i = 0, a = 0, b = n - 1;
    while (i < n) {
        swap(arr, i, a, b);
        i++;
        a++;
        b--;
    }
}

void printArr(int** arr, int n) {
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            cout.width(3);
            cout << arr[i][j];
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
}

int main() {
    int n = input();
    int** arr = createArr(n);
    fillArr(arr, n);
    printArr(arr, n);
    swapArr(arr, n);
    printArr(arr, n);
    cleanMem(arr, n);
    return 0;
}
