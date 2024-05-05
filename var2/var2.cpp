//#include <iostream>
//using namespace std;
//
//int input() {
//    int n;
//    cout << "n =";
//    cin >> n;
//    return n;
//}
//
//int** createArr(int n) {
//    int** arr = new int*[n];
//    int i = 0;
//    while (i < n) {
//        arr[i] = new int[n];
//        i++;
//    }
//    return arr;
//}
//
//void cleanMem(int** arr, int n) {
//    int i = 0;
//    while (i < n) {
//        delete[] arr[i];
//        i++;
//    }
//    delete[] arr;
//    arr = nullptr;
//}
//
//void fillArr(int** arr, int n) {
//    srand(time(NULL));
//    int i = 0;
//    while (i < n) {
//        int j = 0;
//        while (j < n) {
//            arr[i][j] = rand() % 100;
//            j++;
//        }
//        i++;
//    }
//}
//
//int findMax(int** arr, int n) {
//    int i = 0, max = 0, maxN = 0;
//    while (i < n) {
//        int sum = 0;
//        int j = 0;
//        while (j < n) {
//            sum += arr[i][j];
//            j++;
//        }
//        if (i == 0) {
//            max = sum;
//        } else {
//            if (sum > max) {
//                max = sum;
//                maxN = i;
//            }
//        }
//        i++;
//    }
//    return maxN;
//}
//
//void printArr(int** arr, int n) {
//    int i = 0;
//    while (i < n) {
//        int j = 0;
//        while (j < n) {
//            cout.width(3);
//            cout << arr[i][j];
//            j++;
//        }
//        cout << endl;
//        i++;
//    }
//    cout << endl;
//}
//
//void printMax(int maxN) {
//    cout << "Максимальная сумма элементов в " << maxN + 1 << " строке" << endl;
//}
//
//int main() {
//    int n = input();
//    int** arr = createArr(n);
//    fillArr(arr, n);
//    printArr(arr, n);
//    int maxN = findMax(arr, n);
//    printMax(maxN);
//    cleanMem(arr, n);
//    return 0;
//}