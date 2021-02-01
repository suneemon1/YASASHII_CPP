//オブジェクトを動的に作成する。

#include <iostream>
using namespace std;

class Car {
   public:
    int num;
    double gas;
    void show();
};

void Car::show() {
    cout << "車のナンバーは" << num << endl;
    cout << "ガソリンの量は" << gas << endl;
}

int main() {
    Car* car1;
    car1 = new Car;
    car1->num = 1234;
    car1->gas = 20.5;
    car1->show();
    delete car1;
    return 0;
}