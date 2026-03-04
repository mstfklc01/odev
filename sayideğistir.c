#include <stdio.h>

int main() {
    int a, b, gecici;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &a);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &b);

    printf("Degisimden once: a = %d, b = %d\n", a, b);

    // verdiğimiz sayıları değiştirir
    gecici = a;
    a = b;
    b = gecici;

    printf("Degisimden sonra: a = %d, b = %d\n", a, b);

    return 0;
}
