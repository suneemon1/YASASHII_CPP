#include <iostream>
using namespace std;

class Car {
   private:
    int num;
    double gas;

   public:
    void show();
    void check(int n, double g);
};

void Car::show() {
    cout << "車のナンバーは" << num << endl;
    cout << "ガソリン量は" << gas << endl;
}

void Car::check(int n, double g) {
    if (g > 0 && g < 1000) {
        gas = g;
        num = n;
    } else {
        cout << "ガソリン量は正しくありません" << endl;
    }
}

int main() {
    while (1) {
        Car* car1;
        car1 = new Car;
        int tmp_num = 0;
        double tmp_gas = 0;
        cin >> tmp_num >> tmp_gas;
        if (tmp_num == 0 && tmp_gas == 0)
            break;
        else {
            car1->check(tmp_num, tmp_gas);
            car1->show();
        }
        delete car1;
    }
    return 0;
}