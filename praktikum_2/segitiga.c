// Nama Program : segitiga.C
// Deskripsi : Menentukan segitgia memasukkan nilai sisi setiap segitiga dan menentukan kategori segitiga dan menampilkannya dilayar
// Nama Pembuat : Muhammad Fikri Firdaus
// NIM : 24060122140115
// Tanggal : 2/28/2023

#include <stdio.h>

int main (){

  //kamus
  int sisi_1;
  int sisi_2;
  int sisi_3;

  //Algoritma

  scanf("%d",&sisi_1);
  scanf("%d",&sisi_2);
  scanf("%d",&sisi_3);

  if(sisi_1 > 0 && sisi_2 > 0 & sisi_3 > 0){
    if (sisi_1 == sisi_2 && sisi_2== sisi_3 && sisi_3 == sisi_1){
      printf("\nsegitiga sama sisi");
    }else if(sisi_1 != sisi_2 && sisi_2 != sisi_3 && sisi_3 != sisi_1){
      printf("segitiga sembarang");
    }else {
      printf("segitiga sama kaki");
    }
  }else {
    printf("Inputan bukan merupakan sisi segitiga");
  }

}