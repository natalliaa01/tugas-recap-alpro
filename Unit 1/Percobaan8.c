#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

//%f maka akan mengatur semua jumlah digit di belakang koma (desimal)
//%.1f akan mengatur jumlah 1 digit di belakang koma (desimal)
//%.2f akan mengatur jumlah 2 digit di belakang koma (desimal)
//%.3f akan mengatur jumlah 3 digit di belakang koma (desimal)
//%.4f akan mengatur jumlah 4 digit di belakang koma (desimal)
//%.5f akan mengatur jumlah 5 digit di belakang koma (desimal)
