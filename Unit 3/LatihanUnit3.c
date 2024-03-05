#include <stdio.h>

int main()
{
    int jumlah;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &jumlah);

    int arr[jumlah], total = 0;
    for (int i = 0; i < jumlah; i++)
    {
        printf("Nilai elemen ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    printf("Hasil penjumlahan seluruh elemen: %d", total);

    return 0;
}