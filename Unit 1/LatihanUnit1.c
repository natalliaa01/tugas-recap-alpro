#include <stdio.h>

int main () {
    int kecepatan;
    int jarak;
    int waktu;

    //Rumus kecepatan
    printf("Masukkan jarak dan waktu: ");
    scanf("%d %d", &jarak, &waktu);
    float v = jarak / waktu;

    //Rumus jarak
    printf("Masukkan kecepatan dan waktu: ");
    scanf("%d %d", &kecepatan, &waktu);
    float s = kecepatan * waktu;

    //Rumus waktu
    printf("Masukkan jarak dan keecepatan: ");
    scanf("%d %d", &jarak, &kecepatan);
    float t = jarak / kecepatan;

    //Hasil
    printf("Kecepatan: %.2f\n", v);
    printf("Jarak: %.2f\n", s);
    printf("Waktu: %.2f\n", t);

    return 0;
}