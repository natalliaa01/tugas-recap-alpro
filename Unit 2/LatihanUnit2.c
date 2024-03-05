#include <stdio.h>

int main(){
    int jumlahtransaksi;
    printf("Masukan jumlah transaksi: ");
    scanf("%d", &jumlahtransaksi);

    if (jumlahtransaksi <=0)
    { printf("Tidak ada transaksi hari ini.");        
    }
    else
    {
        int nominal, total=0, i=1;
        while (i<=jumlahtransaksi)
        { 
            printf("Masukan nominal transaksi ke-%d: ", i);
            scanf("%d", &nominal);
            total += nominal;
            i++;
        }
        printf("Total pengeluaran hari ini: %d", total);
    }
    return 0;
}