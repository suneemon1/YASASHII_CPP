#include <iostream>
using namespace std;

int add(int* A, int* X1, int* X2);

int main() {
    int x1, x2, a;
    cout << "2科目分の点数を入力してください\n";
    cin >> x1 >> x2;
    cout << "加算する点数を入力してください\n";
    cin >> a;
    add(&a, &x1, &x2);
    cout << a << "点加算しましたので\n"
         << "科目1は" << x1 << "点となりました。\n"
         << "科目2は" << x2 << "点となりました。\n";
}

int add(int* A, int* X1, int* X2) {
    *X1 += *A;
    *X2 += *A;
}
