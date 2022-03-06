//Nama file : bujursangkar
//Deskripsi : menghitung dan menampilkan luas bujur sangkar
//Pembuat   : Novi Dwi Fitriani
//Tanggal pembuatan : 1 Maret 2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    //s : integer (sisi bujursangkar)
    //l : integer (luas bujursangkar)
    int sisi;
/*Algoritma*/
    //s*s

    printf("masukkan sisi: ");
    scanf("%d", &sisi);

    printf("%d", sisi * sisi);
    return 0;
}
