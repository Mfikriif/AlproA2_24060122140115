// Nama Program : bilangan.C
// Deskripsi : Menentukan bilangan bulat positif atau bilangan bulat negatif
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/28/2023

#include <stdio.h>

int main (){

  //kamus

  int i;

  //Algoritma 

  printf("\nMasukkan bilangan i = ");
  if(scanf("%d",&i)){
    if (i > 0){
      printf("Bilangan bulat positif");
    }else if (i < 0){
      printf("Bilangan bulat negatif");
    }else{
      printf("Bilangan bulat positif 0");
    }
  }else {
    printf("bukan termasuk sebuah bilangan");
  }
   
  return 0;
}