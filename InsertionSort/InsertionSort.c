/*Nama File 	: InsertionSort.c*/
/*Deskripsi 	: Membuat program mengurutkan integer dengan insertion sort*/
/*Pembuat   	: Novi Dwi Fitriani - 24060121120027*/
/*Tgl Pembuatan	: Rabu, 27 April 2022*/

#include<stdio.h>

void InsertionSort(int array[], int n)
{
//Kamus Lokal
    int i, temp, j;
//Algoritma
    for (i = 1; i < n; i++) {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
}

int main()
{
//Kamus
    int i, n, array[] ={23, 9, 40, 22, 100, 81, 74, 12, 33, 67};
//Algoritma
    n = sizeof(array) / sizeof(array[0]);
    InsertionSort(array, n);
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
