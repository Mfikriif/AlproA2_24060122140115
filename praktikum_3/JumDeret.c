// Nama Program : JumDeret.c
// Deskripsi : menentukan hasil jumlah dari bilangan deret
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 04/03/2023

#include <stdio.h>

int main(){

  // kamus
  int i = 1;
  int N;
  int total = 0;

  //algoritma 
  printf("Masukkan Nilai integer : ");
  scanf("%d",&N);
  if(N < 0) {
    printf("Masukkan nilai tidak boleh negatif : ");
  }else {for (i = 1; i <= N; i++) {
    total += i;
  }
    printf("%d",total);
  }

    return 0;

}