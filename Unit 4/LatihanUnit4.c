#include <stdio.h>

int kelilingpersegi(int sisi)
{
    return sisi * 4;
}
int luaspersegi(int sisi)
{
    return sisi * sisi;
}
int volumekubus(int sisi)
{
    return sisi * sisi * sisi;
}

int main()
{
    int sisi;

    printf("Masukkan panjang sisi: ");
    scanf("%d", &sisi);

    printf("Keliling persegi: %d\n", kelilingpersegi(sisi));
    printf("Luas persegi: %d\n", luaspersegi(sisi));
    printf("Volume kubus: %d\n", volumekubus(sisi));

    return 0;
}