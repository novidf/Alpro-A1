/*Nama File 	: SelectionSort.c*/
/*Deskripsi 	: Membuat program mengurutkan integer dengan selection sort*/
/*Pembuat   	: Novi Dwi Fitriani - 24060121120027*/
/*Tgl Pembuatan	: Rabu, 27 April 2022*/

#include <stdio.h>

int SelectionSort(int arr[], int n)
{
//Kamus
    int i, j, min, temp;

//Algoritma
    for(i = 0; i < (n-1); i++)
    {
        min = i;
        for (j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
//Kamus
    int i, n, arr[] = {19, 28, 9, 45, 33, 100, 77, 69, 81, 97};
//Algoritma
    n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, n);
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
