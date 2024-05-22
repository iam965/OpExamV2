#include <iostream>
#include <fstream>
using namespace std;

struct node{
    int data;
    node* next;

    node() {
        data = 0;
        next = nullptr;
    }

    node(int number){
        data = number;
        next = nullptr;
    }

    ~node() {
        next = nullptr;
    }
};

struct stack{
    node* top;

    stack(){
        top = nullptr;
    }

    void push(int data) {
        node *tmp = new node(data);
        tmp->next = top;
        top = tmp;
        tmp = nullptr;
    }

    int pop() {
        int k = top->data;
        node* tmp;
        tmp = top;
        top = top->next;
        delete tmp;
        tmp = nullptr;
        return k;
    }

    void print(){
        node* tmp = top;
        while (tmp != nullptr) {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
};

string readfile(){
    ifstream fin;
    fin.open("input.txt");
    string str;
    while (!fin.eof()) {
        string tmp;
        getline(fin, tmp);
        str += tmp + " ";
    }
    fin.close();
    return str;
}

stack getNumbers(string str){
    stack st;
    string tmp = "";
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            tmp += str[i];
        } else {
            st.push(stoi(tmp));
            tmp = "";
        }
        i++;
    }
    return st;
}

void writeNumbers(stack st) {
    ofstream fout;
    fout.open("output.txt");
    while (st.top != nullptr) {
        int n = st.pop();
        fout << n << endl;
    }
    fout.close();
}

int main() {
    string str = readfile();
    cout << str << endl;
    stack st = getNumbers(str);
    st.print();
    writeNumbers(st);
    return 0;
}