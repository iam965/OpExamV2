#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;

    node(){
        data = rand() % 101 - 50;
        next = nullptr;
    }
};

struct list{
    node* head;

    list(){
        head = nullptr;
    }

    ~list(){
        node* tmp = head;
        while (tmp != nullptr){
            tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    void add() {
        if (head == nullptr) {
            head = new node();
        } else {
            node* tmp = head;
            while(tmp->next != nullptr) {
                tmp = tmp->next;
            }
            tmp->next = new node();
        }
    }

    void add(node* n) {
        if (head == nullptr) {
            head = n;
        } else {
            node* tmp = head;
            while(tmp->next != nullptr) {
                tmp = tmp->next;
            }
            tmp->next = n;
        }
    }

    void print() {
        node* tmp = head;
        while(tmp != nullptr) {
            cout << tmp << " " << tmp->data << endl;
            tmp = tmp->next;
        }
    }
};

int input(){
    int n;
    cout << "Введите размер списка l1:";
    cin >> n;
    return n;
}

list getL1(int n){
    list l1;
    int i = 0;
    while (i < n) {
        l1.add();
        i++;
    }
    return l1;
}

void moveNumbers(list l1, list &l2, list &l3){
    while(l1.head != nullptr) {
        node* tmp = l1.head;
        l1.head = l1.head->next;
        tmp->next = nullptr;
        if(tmp->data > 0) {
            l2.add(tmp);
        }
        if(tmp->data < 0) {
            l3.add(tmp);
        }
        tmp = nullptr;
    }
}

int main(){
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int n = input();
    list l1 = getL1(n);
    l1.print();
    cout << endl;
    list l2, l3;
    moveNumbers(l1, l2, l3);
    l2.print();
    cout << endl;
    l3.print();
    cout << endl;
    return 0;
}