#include <stdio.h>

int main() {
    int numbers[5] = {3,5,7,9,11};
    int sayi;
    
    printf("Sayıyı giriniz: ");
    scanf("%d", &sayi);
    
    for(int i = 0; i < 5; i++)
    {
        if(sayi == numbers[i])
        {
            printf("True");
            break;
        }
    }

    return 0;
}
