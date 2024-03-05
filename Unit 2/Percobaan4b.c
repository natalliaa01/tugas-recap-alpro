#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

//program di atas menggunakan nested loop

//variabel i akan mengiterasi nilai 2 dan 3 sehingga akan mencetak kalimat "Bilangan utama: " dengan diikuti nilai 2 dan 3
//variabel j akan mengiterasi nilai 1 dan 2 sehingga akan mencetak kalimat "Bilangan pengali: " dengan diikuti nilai 1 dan 2

//pada loop kedua, program mencetak hasil perkalian antara bilangan utama dan bilangan pengali secara berurutan

//output:

//Bilangan utama: 2
// Bilangan pengali: 1
//  Hasil perkalian: 2

// Bilangan pengali: 2
//  Hasil perkalian: 4

//Bilangan utama: 3
//  Bilangan pengali: 1
//   Hasil perkalian: 3

// Bilangan pengali: 2
//  Hasil perkalian: 6

