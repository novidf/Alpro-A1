/*Nama File 	: BubbleSort.c*/
/*Deskripsi 	: Membuat program mengurutkan integer dengan selection sort*/
/*Pembuat   	: Novi Dwi Fitriani - 24060121120027*/
/*Tgl Pembuatan	: Rabu, 27 April 2022*/

#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, n, *arr;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

