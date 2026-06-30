#include <iostream>
using namespace std;

void inputData(float &berat, float &tinggi){
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

float hitungBMI(float berat, float tinggi)
{
    return berat / (tinggi * tinggi);
}

string cekKondisi(float bmi){
    if(bmi < 18.5)
        return "Berat Badan Kurang";
    else if(bmi < 25)
        return "Berat Badan Normal";

    return "";
}

int main() {
    float berat, tinggi;

    inputData(berat, tinggi);

       float bmi = hitungBMI(berat, tinggi);

    return 0;
}