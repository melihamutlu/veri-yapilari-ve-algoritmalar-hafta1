/*  3-  Klavyeden -1 giriline kadar, girilen sayıların ortalamalarını gösteren programı yazınız. */


#include <iostream>
using namespace std;

int main() {
    int count = 0; /* girilen sayıların adedi */
    int sum = 0; /* girilen sayıların toplamı */
    int num; /*kullanıcının girdiği sayı */

    // kullanıcı -1 değerini girene kadar döngü devam eder
    while (true) {
        cout << "Bir sayi girin : ";
        cin >> num;

        // eğer kullanıcı -1 girdiyse döngüyü sonlandır
        if (num == -1) {
            break;
        }

        // girilen sayıları topla ve sayacı arttır
        sum += num;
        count++;
    }

    // eğer en az bir sayı girildiyse sayıların ortalamasını hesapla ve ekrana yazdır
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Girilen sayilarin ortalamasi: " << average << endl;
    } else {
        cout << "En az bir sayi girmelisiniz!" << endl;
    }

    return 0;
}
