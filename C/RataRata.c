#include <stdio.h>
#include <string.h>

int main(){
    char *kota[] = {"Jakarta", "Semarang", "Kendal"};
    int penjualan[3][4] = {
        {10,15,5,6},
        { 8,7 ,5,4},
        { 3,5 ,2,8}
    };
    char *bulan[] = {"Januari", "Februari", "Maret", "April"};

    printf("| Kota/Bulan  | Januari | Februari  | Maret | April |\n");
    printf("|-------------|---------|-----------|-------|-------|\n");

    for(int i = 0; i < 3; i ++){
        printf("| %-12s |", kota[i]);
        for(int j = 0; j < 4; j ++){
            printf("%-7d |", penjualan[i][j]);
        }
        printf("\n");
    }


    //a.rata rata  penjualan masing masing kota ya ges ya
    printf("A.Rata Rata Penjualan Masing Masing Kota\n");
    for(int i = 0; i < 3; i ++){
        float total = 0;
        for(int j = 0; j < 4; j ++){
            total += penjualan[i][j];
        
        }
        printf("%s: %.2f\n", kota[i],total / 4);
    }

    //b. rata rata penjualan masing masing bulan ya ges ya
    printf("B.Rata Rata Penjualan Masing Masing Bulan\n");
    for(int i = 0; i < 4; i ++){
        float total = 0;
        for(int j = 0; j < 3; j++){
            total += penjualan[j][i];
        }
        printf("%s: %.2f\n", bulan[i],total /3);
    }

    //c. Penjualan Kota Terbesar ya ges ya
    printf("C.Penjualan Kota Terbesar\n");
    int MaxKota = 0;
    char *Kota_Terbesar = kota[0];
    for(int i = 0; i < 3; i++){
        int total = 0;
        for(int j= 0; j < 4; j ++){
            total += penjualan[i][j];
        }
        if(total > MaxKota){
            MaxKota = total;
            Kota_Terbesar = kota[i];
        }
    }
    printf("\n Penjualan Kota Terbesar ialah:  %s\n", Kota_Terbesar);
    //d.  Penjualan Bulan Terbesar ya ges ya
    printf("D. Penjualan Bulan Terbesar\n ");
    int MaxBulan = 0;
    char *Bulan_Terbesar = bulan[0];
    for(int i = 0; i < 4; i ++){
        int total = 0;
        for(int j = 0; j < 3; j ++){
            total += penjualan[j][i];
        }
        if(total > MaxBulan){
            MaxBulan = total;
            Bulan_Terbesar = bulan[i];
        }
    }
     printf("\n Penjualan Bulan Terbesar ialah: %s\n", Bulan_Terbesar);




    
}