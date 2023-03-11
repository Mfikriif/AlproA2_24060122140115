// Nama Program : CekiBilSemp.c
// Desekripsi : Mencari bilangan sempurna dari sebuah bilangan dan menampilkannya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 04/03/2023

#include <stdio.h>

int main (){

//kamus
int i;
int N;
int jumlah = 0;

//algoritma
scanf("%d",&N);
for( i = 1; i < N ; i++){
  if (N % i == 0){
    jumlah += i;
  }
}
if (jumlah == N){
  printf("Bilangan sempurna");
}else{
  printf("Bukan bilangan sempurna");
}


  return 0;
}