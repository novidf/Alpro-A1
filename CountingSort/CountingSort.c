/*Nama File 	: CountingSort.c*/
/*Deskripsi 	: Membuat program mengurutkan integer dengan counting sort*/
/*Pembuat   	: Novi Dwi Fitriani - 24060121120027*/
/*Tgl Pembuatan	: Rabu, 27 April 2022*/

#include <stdio.h>

void counting_sort(int arr1[],int n,int max, int min){
    int count[50]={0},i,j;
    for(i=0;i<n;++i)
        count[arr1[i]-min]=count[arr1[i]-min]+1;
    printf("\nMax: %d\nMin: %d\n", max,min);
    for(i=0;i<=max-min;++i)
        for(j=1;j<=count[i];++j)
            printf("%d ",i+min);
}

int main(){
    int i, n=10, arr[10]={9, 4, 2, 8, 5, -1, 3, 10, 7, 6}, max=0, min=0;
//    scanf("%d", &n);
//    arr = (int*) malloc(n * sizeof(int));
//    for(i=0;i<n;i++){
//      scanf("%d", &arr[i]);
//    }

    printf("Array sebelum disorting: ");
    for(i = 0; i < n; i++){
        if(arr[i]>max)
            max=arr[i];
        (arr[i]<min)? min=arr[i] : min;
        printf("%d  ", arr[i]);
    }
    printf("\nMax: %d\nMin: %d", max,min);
    //printf("\nNilai Max: %d\n", max);

    printf("\nArray setelah disorting: ");
    counting_sort(arr,n,max, min);
    return 0;
}
