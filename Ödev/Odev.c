#include <stdio.h>

int sayiVarMi(int dizi[], int istenen)
{
    for(int i = 0; i < 5; i++)
    {
        if(dizi[i] == istenen)
        {
            return 1;
        }
    }
    return 0;
}


int main() {
    int numbers[5] = {3,5,7,9,11};
    int sayi;
    
    printf("Sayıyı giriniz: ");
    scanf("%d", &sayi);
    
    if(sayiVarMi(numbers,sayi) == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
