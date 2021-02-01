#include <iostream>
using namespace std;
void add(int &X1, int &X2, int &A) {
    X1 += A;
    X2 += A;
}
int main() {
    int x1, x2, a;
    cout << "2教科分の点数を入力してください\n";
    cin >> x1 >> x2;
    cout << "加算する点数を入力してください。\n";
    cin >> a;
    add(x1, x2, a);
    cout << a << "点加算しましたので\n科目１は" << x1
         << "点となりました。\n科目2は" << x2 << "点となりました。\n";
}