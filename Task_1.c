#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int res1, res2, res3;
    scanf_s("%d %d %d", &res1, &res2, &res3);
    float itog = (res1 + res2 + res3) / 3;
    if (itog == 5.000000) {
        printf("Отличник");
    }
    else if (itog <= 4.999999 && itog >= 3.000000) {
        printf("Хорошист");
    }
    else {
        printf("Двоечник");
    }

    return 0;
}