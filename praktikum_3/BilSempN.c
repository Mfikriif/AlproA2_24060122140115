// Nama Program : BilSempN.c
// Desekripsi : Mencari bilangan sempurnya dari inputan integer sembarang dan menampilkannya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 04/03/2023

#include <stdio.h>

int main() {

  //kamus
  int i;
  int n;
  int jumlah_faktor;
  int j;

  //algoritma

  printf("Masukkan Nilai N : ");
  scanf("%d",&n);

  if (n > 0) {
    printf("Bilangan sempurnya adalah : ");
    for( i = 1; i <= n; i++) {
      jumlah_faktor = 0;
      for (j = 1; j <= i / 2; j++){
        if (i % j == 0) {
          jumlah_faktor += j;
        }
      }
      if (jumlah_faktor == i) {
        printf(" %d",i);
      }
    }

  }

  return 0;
}
