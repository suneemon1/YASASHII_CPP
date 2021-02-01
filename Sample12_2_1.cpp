#include <iostream>
using namespace std;

class Car {
   private:
    int num;
    int gas;

   public:
    void show();
    void check(int &n, double &g);
};

void Car::show() {
    cout << "車のナンバーは" << num;
    cout << "ガソリン量は" << gas;
}

void Car::check(int &n, double &g) {
    if (g > 0 && g < 1000) {
        gas = g;
        num = n;
    } else {
        cout << "ガソリン量は正しくありません" << endl;
    }
}

int main() {
    while (1) {
        Car *car1;
        int
    }
}