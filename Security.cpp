#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string layout;
    
    // 1. Input string layout kasino
    if (!(cin >> layout)) return 0;

    // 2. Cari posisi '$' dan 'T' menggunakan fungsi find
    size_t moneyPos = layout.find('$');
    size_t thiefPos = layout.find('T');

    // 3. Tentukan batas pencarian (siapa yang posisinya lebih kecil)
    size_t start = min(moneyPos, thiefPos);
    size_t end = max(moneyPos, thiefPos);

    // 4. Ambil bagian string di antara uang dan pencuri
    string zoneBetween = layout.substr(start, end - start);

    // 5. Periksa apakah ada 'G' di dalam zona tersebut
    if (zoneBetween.find('G') != string::npos) {
        cout << "quiet" << endl;
    } else {
        cout << "ALARM" << endl;
    }

    return 0;
}
