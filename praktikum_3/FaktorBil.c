// Nama Program : FaktorBil.c
// Desekripsi : Mencari faktor dari sebuah bilangan dan menampilkannya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 04/03/2023

#include <stdio.h>

int main(){

  // kamus

  int i;
  int N;

  //algoritma
  scanf("%d",&N);
  printf("Faktor Bilangannya adalah ");
  for (i = 1; i <= N; i++){
    if (N % i == 0) {
      printf("%d ",i);
    }
  }

  return 0;
}