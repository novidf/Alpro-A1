//Nama File : CekBulan//
//Deskripsi : menuliskan ke layar nama-nama Bulan dari nomor 1 s.d 12//
//Pembuat   : Novi Dwi Fitriani//
//Tanggal   : Jumat, 11 Maret 2022//

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    int b;

    /*Algoritma*/;
    printf("====PROGRAM NAMA BULAN====\n");
    printf("Masukkan angka = ");
    scanf("%d", &b);
    if (b>0 && b<13){

    switch(b)
{

    case 1 : printf("Januari\n");break;
    case 2 : printf("Februari\n");break;
    case 3 : printf("Maret\n");break;
    case 4 : printf("April\n");break;
    case 5 : printf("Mei\n");break;
    case 6 : printf("Juni\n");break;
    case 7 : printf("Juli\n");break;
    case 8 : printf("Agustus\n");break;
    case 9 : printf("September\n");break;
    case 10 : printf("Oktober\n");break;
    case 11 : printf("November\n");break;
    case 12 : printf("Desember\n");break;

}
}
else{
    printf("Masukan nama bulan salah\n");

}
    return 0;
}
