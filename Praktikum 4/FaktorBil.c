/*Nama File : FaktorBil.c */
/*Deskripsi : Membuat algoritma untuk menentukan faktor bilangan dari bilangan integer sembarang*/
/*Pembuat : Novi Dwi Fitriani - 24060121120027*/
/*Tanggal : Kamis, 17 Maret 2022 00.10 WIB*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int N, i;

/*Algoritma*/
    printf("Masukkan bilangan : ");
    scanf("%d", &N);

    if (N>0) {
        for (i=1; i<N; i++) {
            if (N%i == 0) {
                printf("%d, ", i);
            }
        }
        printf("dan %d", i);
    }
    else {
        printf("Masukkan bilangan positif!");
    }
    return 0;
}

