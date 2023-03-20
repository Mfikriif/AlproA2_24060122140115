// Nama Program : JumBarKolMat.c
// Deskripsi : Menambahkan semua nilai ada yang pada baris dan kolom sebuah array 2 dimensi dan menampilkannya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 14 maret 2023

#include <stdio.h>

int main() {

  // kamus

  int M,N;
  int Array[50][50];
  int i,j;
  int sum_baris,sum_kolom;
  int total = 0;  

  //algoritma

  printf("Masukkan ukuran tabel M : ");
  scanf("%d",&M);
  printf("Masukkan ukuran tabel N : ");
  scanf("%d",&N);
  
  printf("Masukkan nilai elemen array dua dimensi :");
  for (i=0;i<M;i++) {
    for(j=0;j<N;j++){
      printf("Indeks ke [%d] : ",i,j);
      scanf("%d",&Array[i][j]);
    }
  }

  for(i=0;i<M;i++){
    sum_baris=0;
    for(j=0;j<N;j++) {
      sum_baris += Array[i][j];
    }
    total += sum_baris;
  }

  for(i=0;i<N;i++) {
    sum_kolom = 0;
    for(j=0;j<M;j++){
     sum_kolom += Array[i][j];
    }
    total += sum_kolom;

  }
  printf("Hasil penjumlahan semua elemennya adalah : %d ",total);

  return 0;
}