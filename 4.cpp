/*  4- C/C++ ile Fonksiyon kullanarak Vize ve Final notu girilen öğrencinin ortalamasını hesaplayınız. */


#include <iostream>
using namespace std;

float ortalama(float vize, float final) {
    float ortalama_notu = (vize * 0.4) + (final * 0.6);
    return ortalama_notu;
}

int main() {
    float vize, final;
    cout << "Vize notunu girin: ";
    cin >> vize;
    cout << "Final notunu girin: ";
    cin >> final;
    float ortalama_notu = ortalama(vize, final);
    cout << "Ortalama notunuz: " << ortalama_notu << endl;
    return 0;
}
