//Nama File : CekHari
//Deskripsi : menuliskan ke layar nama-nama hari dari nomor 1 s.d 7
//Pembuat   : Novi Dwi Fitriani
//Tanggal   : Jumat, 11 Maret 2022

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    int h;

    /*Algoritma*/;
    printf("====PROGRAM NAMA HARI====\n");
    printf("Masukkan angka = ");
    scanf("%d", &h);

    if (h>0 && h<8){

    switch(h)
{

    case 1 : printf("Hari Senin\n");break;
    case 2 : printf("Hari Selasa\n");break;
    case 3 : printf("Hari Rabu\n");break;
    case 4 : printf("Hari Kamis\n");break;
    case 5 : printf("Hari Jum'at\n");break;
    case 6 : printf("Hari Sabtu\n");break;
    case 7 : printf("Hari Minggu\n");break;

}
}
else{
    printf("Masukan nama hari salah\n") ;

}
return 0;
}
