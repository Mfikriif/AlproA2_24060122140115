// Nama Program : BilprimaN.c
// Desekripsi : Mencari nilai dari bilangan prima sampai dengan inputan N dan menampilkan hasilnya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 04/03/2023

#include <stdio.h>

int main() {

  //kamus

  int N;
  int Faktor;
  int i;
  int j;

  //Algoritma                                                               

  printf("Masukkan Nilai N : ");
  scanf("%d",&N);

  if (N > 0) {
    printf("Bilangan Primanya adalah");
    for (i = 1; i <= N; i++) {
      Faktor = 0;
      for (j = 1; j <= i; j++) {
        if ( i % j == 0){
          Faktor++;
        }
      }
      if (Faktor == 2) {
        printf(" %d", i);
      }
    }
  }

  return 0;

}