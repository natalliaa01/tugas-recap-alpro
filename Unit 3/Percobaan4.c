#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() 1
{

    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++)
    {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

// Program menggunakan array 'names' dan 'ages' untuk menyimpan nama dan usia
// Program melakukan iterasi melalui array dengan menggunakan loop for, lalu mencetak setiap nama dan umur ke layar

// Output:

// Name          Age
//-----------------
// Roma          25
// Romi          30
// Romo          35