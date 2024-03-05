#include <stdio.h>

int main()
{
    int i = 2, j;

    do
    {
        printf("Bilangan utama: %d\n", i);
        j = 1;

        do
        {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

// program di atas menggunakan nested do loop

// variabel i akan mengiterasi nilai 2 dan 3 sehingga akan mencetak kalimat "Bilangan utama: " dengan diikuti nilai 2 dan 3
// variabel j akan mengiterasi nilai 1 dan 2 sehingga akan mencetak kalimat "Bilangan pengali: " dengan diikuti nilai 1 dan 2

// pada loop kedua, program mencetak hasil perkalian antara bilangan utama dan bilangan pengali secara berurutan

// output:

// Bilangan utama: 2
//  Bilangan pengali: 1
//   Hasil perkalian: 2

// Bilangan pengali: 2
//  Hasil perkalian: 4

// Bilangan utama: 3
//   Bilangan pengali: 1
//    Hasil perkalian: 3

// Bilangan pengali: 2
//  Hasil perkalian: 6

// pada while loop, kondisi diuji sebelum eksekusi blok kode. jika kondisi awal terpenuhi, maka blok kode akan dieksekusi dan kondisi akan diperiksa lagi.
// pada do while loop, kondisi diuji setelah blok kode dieksekusi. jika setelah eksekusi blok kode, kondisi terpenuhi, maka blok kode akan dieksekusi lagi untuk iterasi berikutnya.