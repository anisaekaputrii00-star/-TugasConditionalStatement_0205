#include <iostream>
using namespace std;

void inputData(float &berat, float &tinggi){
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

int main() {
    float berat, tinggi;

    inputData(berat, tinggi);

    return 0;
}