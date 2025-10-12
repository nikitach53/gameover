#include <iostream>
#include <random>
using namespace std;

int main() {
    int a, b;
    cout << "Введите диапазон (a b): ";
    cin >> a >> b;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(a, b);
    cout << "Случайное число: " << dis(gen) << endl;
    return 0;
}
