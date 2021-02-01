//車のナンバーとか疎林の量を
//クラスを用いて出力

#include <iostream>
using namespace std;

class Car {
   public:
    int num;
    double gus;
    void show();
};

void Car::show() {
    cout << "車のナンバーは" << num << endl;
    cout << "ガソリンの量は" << gus << endl;
}

int main() {
    Car car1;
    car1.num = 1234;
    car1.gus = 20.5;
    car1.show();
    return 0;
}