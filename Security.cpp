#include <stdio.h>
#include <string.h>

int main() {
    char layout[100];
    int moneyPos = -1, thiefPos = -1;
    int guardFound = 0;

    // 1. Input string layout kasino
    scanf("%s", layout);

    // 2. Cari posisi '$' dan 'T'
    int len = strlen(layout);
    for (int i = 0; i < len; i++) {
        if (layout[i] == '$') moneyPos = i;
        if (layout[i] == 'T') thiefPos = i;
    }

    // 3. Tentukan batas pencarian (siapa yang lebih dulu muncul)
    int start = (moneyPos < thiefPos) ? moneyPos : thiefPos;
    int end = (moneyPos > thiefPos) ? moneyPos : thiefPos;

    // 4. Periksa apakah ada 'G' di antara start dan end
    for (int i = start + 1; i < end; i++) {
        if (layout[i] == 'G') {
            guardFound = 1;
            break;
        }
    }

    // 5. Output hasil sesuai kondisi
    if (guardFound) {
        printf("quiet\n");
    } else {
        printf("ALARM\n");
    }

    return 0;
}
