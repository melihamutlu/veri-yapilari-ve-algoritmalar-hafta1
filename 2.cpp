/* 2- Sıralanmış bir diziden yinelenmiş olan sayıları kaldıran program kodunu yazınız. */


#include <iostream>
#include <vector> /* vector sınıfını include ettim. Eleman silme işlemi yapacağım için dinamik dizi kullancağım. */

using namespace std;

vector<int> removeDuplicates(vector<int> nums) { /* removeDuplicates tekrarlanan değerleri silen bir fonsiyondur. */
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if (i == 0 || nums[i] != nums[i-1]) {
            result.push_back(nums[i]);
        }
    }
    return result;
}

int main() {
    // Örnek girdiler
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    
    // Tekrarlayanları kaldırmak için vector sınıfını kullanıyorum
    vector<int> result = removeDuplicates(nums);
    
    // Döngüde sonucu yazdırdığımız kısım
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
