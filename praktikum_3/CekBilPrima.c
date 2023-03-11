// Nama Program : CekBilPrima.c
// Desekripsi : Melakukan pengecekkan dan memberikan status apakah bilangan prima atau bukan terhadap sebuah inputan integer sembarang,dan menampilkannya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 04/03/2023

#include <stdio.h>

int main(){

  //kamus
  int i;
  int N;
  int jumlah = 0;

  //algoritma
  scanf("%d",&N);
  for (i = 1; i <= N; i++){
    if (N % i == 0){
      jumlah ++;
    }

  }
  if (jumlah == 2){
    printf("%d Bilangan prima ",N);
  }else {
    printf("%d Bukan bilangan prima",N);
  }

  return 0;
}