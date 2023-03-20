// Nama Program : jumFrekNilTabel.c
// Deskripsi : Mencari nilai integer yang sama dan menambahkan niai tersebut dan menampilkannya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 14 maret 2023


#include <stdio.h>
#include <stdlib.h>

int main() {

  //kamus
  int *array;
  int i,j,n,sama,jumlah=0;

  //algoritma
  printf("masukkan ukuran array : ");
  scanf("%d",&n);

  array = (int*)malloc(n* sizeof(int));
  for(i=0;i<n;i++){
    printf("indeks ke - %d : ",i);
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++){
    sama = 0;
    for(j=0;j<n;j++){
      if(array[i]==array[j]){
        sama++;
      }
    }
    if(sama > 1){
      jumlah+=array[i];
    }
  }
  printf("jumlah frekuensinya = %d", jumlah);

  return 0;
}
